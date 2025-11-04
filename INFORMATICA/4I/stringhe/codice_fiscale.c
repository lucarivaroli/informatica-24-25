/*Scrivere un programma in linguaggio C che calcoli e visualizzi il codice fiscale 
(senza il carattere di controllo finale) chiedendo all’utente di inserire nome, 
cognome, data di nascita nel formato GG/MM/AAAA, sesso (M o F).
utilizzare comune G186
utilizzare le funzioni
Il codice fiscale è un codice alfanumerico di 16 caratteri che serve per identificare in modo univoco ogni cittadino italiano.
È composto in questo modo:
CCC NNN YYMDD LLLL C
dove:
CCC → prime tre lettere del cognome, formate prendendo le consonanti (o le vocali, se le consonanti non bastano);
NNN → prime tre lettere del nome, con una regola simile a quella del cognome (ma se ci sono quattro consonanti, si prendono la 1ª, 3ª e 4ª);
YY → ultime due cifre dell’anno di nascita;
M → lettera che rappresenta il mese di nascita (A = gennaio, B = febbraio, C = marzo, D = aprile, E = maggio, H = giugno, L = luglio, M = agosto, P = settembre, R = ottobre, S = novembre, T = dicembre);
DD → giorno di nascita (per le donne si aggiunge 40 al giorno);
LLLL → codice del comune di nascita (per questo esercizio useremo G186, che è il codice del comune di Ostiglia);
C → lettera di controllo calcolata con una formula basata sui precedenti 15 caratteri.


Sarà necessario verificare la correttezza degli input, quindi nome e cognome 
devono essere composti solo da lettere; la data deve essere composta solo da numeri 
(oltre agli eventuali /, si può scegliere se far inserire un valore della data alla 
volta o tutta la data con il separatore /); il sesso può avere solo la lettera M o F.
 Per il controllo di nome, cognome e data, si suggerisce di leggere l’input carattere 
 per carattere usando getchar().
*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){
    char nome[30], cognome[30], data[15], sesso;
    printf("inserisci il nome: ");
    fgets(nome, 30, stdin);
    printf("inserisci il cognome: ");
    fgets(cognome, 30, stdin);
    printf("inserisci la data di nascita (GG/MM/AAAA): ");
    fgets(data, 15, stdin);
    printf("inserisci il sesso (M/F): ");
    scanf("%c", &sesso);

    char strccc[7]="";
    char strnnn[7]="";
    char stryy[3]="";
    char strm[2]="";
    char strdd[4]="";
    char strllll[5]="G186"; 
    char codice_fiscale[16]="";
    //calcolo CCC
    int consonanti_cognome=0, vocali_cognome=0;
    for(int i=0; i<strlen(cognome); i++){
        if((cognome[i]>='A' && cognome[i]<='Z') || (cognome[i]>='a' && cognome[i]<='z')){
            if(cognome[i]!='a' && cognome[i]!='e' && cognome[i]!='i' && cognome[i]!='o' && cognome[i]!='u' &&
               cognome[i]!='A' && cognome[i]!='E' && cognome[i]!='I' && cognome[i]!='O' && cognome[i]!='U'){
                if(consonanti_cognome<3){
                    strccc[consonanti_cognome]=cognome[i];
                    consonanti_cognome++;
                }
            }else{
                if(consonanti_cognome<3){
                    vocali_cognome++;
                }
            }
        }
    }
    //aggiungio vocali se consonanti non bastano
    if(consonanti_cognome<3){
        for(int i=0; i<strlen(cognome); i++){
            if((cognome[i]>='A' && cognome[i]<='Z') || (cognome[i]>='a' && cognome[i]<='z')){
                if(cognome[i]=='a' || cognome[i]=='e' || cognome[i]=='i' || cognome[i]=='o' || cognome[i]=='u' ||
                   cognome[i]=='A' || cognome[i]=='E' || cognome[i]=='I' || cognome[i]=='O' || cognome[i]=='U'){
                    if(consonanti_cognome<3){
                        strccc[consonanti_cognome]=cognome[i];
                        consonanti_cognome++;
                    }
                }
            }
        }
    }
    
    
    
    //calcolo NNN
    int consonanti_nome=0, vocali_nome=0;
    for(int i=0; i<strlen(nome); i++){
        if((nome[i]>='A' && nome[i]<='Z') || (nome[i]>='a' && nome[i]<='z')){
            if(nome[i]!='a' && nome[i]!='e' && nome[i]!='i' && nome[i]!='o' && nome[i]!='u' &&
               nome[i]!='A' && nome[i]!='E' && nome[i]!='I' && nome[i]!='O' && nome[i]!='U'){
                if(consonanti_nome<4){
                    strnnn[consonanti_nome]=nome[i];
                    consonanti_nome++;  
                }
            }else{
                if(consonanti_nome<3){
                    vocali_nome++;  
                }
    
            }
        }
    }
    //se ci sono 4 consonanti prendo la 1,3,4
    if(consonanti_nome==4){
        strnnn[0]=strnnn[0];
        strnnn[1]=strnnn[2];
        strnnn[2]=strnnn[3];
    }
    //aggiungio vocali se consonanti non bastano
    if(consonanti_nome<3){
        for(int i=0; i<strlen(nome); i++){
            if((nome[i]>='A' && nome[i]<='Z') || (nome[i]>='a' && nome[i]<='z')){
                if(nome[i]=='a' || nome[i]=='e' || nome[i]=='i' || nome[i]=='o' || nome[i]=='u' ||
                   nome[i]=='A' || nome[i]=='E' || nome[i]=='I' || nome[i]=='O' || nome[i]=='U'){
                    if(consonanti_nome<3){
                        strnnn[consonanti_nome]=nome[i];
                        consonanti_nome++;
                    }
                }
            }
        }
    }
    //calcolo YY
    stryy[0]=data[8];
    stryy[1]=data[9];
    stryy[2]='\0';   
    //calcola M
    
   

