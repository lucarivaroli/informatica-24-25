//FUNZIONANTE

#include <Wire.h>                   // Comunicazione con display LCD I2C
#include <LiquidCrystal_I2C.h>      //  display LCD I2C

#define TRIG 7                      // Pin di uscita sensore ultrasuoni
#define ECHO 6                      // Pin di entrata sensore ultrasuoni
#define RELAY 8                     // Pin collegato al relay per la pompa
#define LED_LUCE 5                  // LED verde che si accende con poca luce
#define LED_LAMPEGGIO 4             // LED rosso che lampeggia
#define LUMINOSITA_PIN A0           // Pin del fotoresistore (luminosità)

LiquidCrystal_I2C lcd(0x27, 20, 4); // Inizializzazione display 

// Funzione per far lampeggiare un LED
void lampeggiaLED(int pin, int lampeggi, int durata) {
    for (int i = 0; i < lampeggi; i++) {
        digitalWrite(pin, HIGH);
        delay(durata);
        digitalWrite(pin, LOW);
        delay(durata);
    }
}

//funzione che misura la distanza usando il sensore a ultrasuoni (HC-SR04)
long misuraDistanza() {
    digitalWrite(TRIG, LOW);            //stabilizza il segnale
    delayMicroseconds(2);
    digitalWrite(TRIG, HIGH);           //inizio della misurazione
    delayMicroseconds(10);
    digitalWrite(TRIG, LOW);            //fine misurazione

    long durata = pulseIn(ECHO, HIGH);        // Tempo che l'impulso impiega a tornare al sensore
    long distanza = durata * 0.034 / 2;       
    return distanza;
}

// Inizializzazione, eseguita una sola volta
void setup() {
    pinMode(TRIG, OUTPUT);
    pinMode(ECHO, INPUT);
    pinMode(RELAY, OUTPUT);
    pinMode(LED_LUCE, OUTPUT);
    pinMode(LED_LAMPEGGIO, OUTPUT);
    digitalWrite(RELAY, HIGH);          // Il relay parte spento (HIGH = OFF)

    Serial.begin(9600); // inizia la comunicazione

    lcd.init();         // Inizializza il display
    lcd.backlight();    // Attiva retroilluminazione
    lcd.setCursor(0, 0);
    lcd.print("Distributore ON");
    delay(1000);
}


// Ciclo principale, eseguito continuamente
void loop() {
    long distanza = misuraDistanza();               // ottiene la distanza misurata dal senssoe
    int luminosita = analogRead(LUMINOSITA_PIN);    // legge la luminosita e la converte in un valore tra 0 a 1023

    
    Serial.print("Distanza: ");
    Serial.print(distanza);
    Serial.print(" cm, Luminosità: ");
    Serial.println(luminosita);

    
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Distanza: ");
    lcd.print(distanza);
    lcd.print("cm");

    lcd.setCursor(0, 1);
    if (distanza <= 10) {

        // DO-WHILE: lampeggia finché il bicchiere è sotto (<=10 cm)
        do {
            
            lampeggiaLED(LED_LAMPEGGIO, 1, 200);
            distanza = misuraDistanza(); // aggiorna la distanza
            
            digitalWrite(RELAY, LOW); // Accende il relay
            lcd.print("Pompa: ACCESA");
            lcd.setCursor(0, 2);
            lcd.print("Grazie, arrivederci! ");

        } while (distanza <= 10);

        

    } else {
        
        digitalWrite(RELAY, HIGH); // Spegne il relay
        lcd.print("Pompa: SPENTA");
        lcd.setCursor(0, 2);
        lcd.print("Metti il bicchiere! ");
    }

    // Controllo luminosità
    if (luminosita < 35) {
        digitalWrite(LED_LUCE, HIGH);
    } else {
        digitalWrite(LED_LUCE, LOW);
    }

    delay(500); 
}