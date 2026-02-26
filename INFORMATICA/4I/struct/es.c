#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	int giorno, mese, anno;
}data;


typedef struct{
    char titolo[100];
    char autore[50];
    int isbn;
	int copie_totali;
	int copie_disponibili;
	data data_prestito;
	data data_restituzione;
	
}libro;

void inseriscilibri(libro *books, int n ){
	
    int i=0;
		for(i=0;i<n;i++){
			printf("inserisci il titolo del libro: ");
			fgets(books[i].titolo,100, stdin);
			printf("inserisci l'autore del libro: ");
			fgets(books[i].autore, 50, stdin);
			printf("inserisci isbn: ");
			scanf("%d", &books[i].isbn);
			printf("copie totali: ");
			scanf("%d", &books->copie_totali);
			printf("copie disponibili: ");
			scanf("%d", &books->copie_disponibili);
			while(getchar() != '\n');
		}
		books->copie_disponibili=books->copie_totali;
		
		books->data_prestito.giorno=0;
		books->data_restituzione.giorno=0;
		
    
}

void stampaLibro( libro *books, int n){
	int i=0;
	for(i=0; i<n; i++){
		printf("Titolo: %s\nAutore: %s\nAnno: %d\n isbn: %d\n copie totali: %d\n copie disponibili: %s\n"
		, books[i].titolo, books[i].autore, books[i].isbn, books[i].copie_totali, books[i].copie_disponibili);
	}
	if(books.copie_disponibile>books.copie_totali){
		printf("prestito: %d%d%d",books.data_prestito.giorno, books.data_prestito.mese, books.data_prestito.anno);
		
		printf("restituzione: %d%d%d",books.data_restituzione.giorno, books.data_restituzione.mese, books.data_restituzione.anno );
		
	}
	
}

void presta_libro(libro *books){
	if(books->copie_disponibili==0){
		printf("nessuna copia disponibile");
		return ;
	}
	printf("data prestito(inserire g m a):   ");
	scanf("%d%d%d", &books->data_prestito.giorno, &books->data_prestito.mese, &books->data_prestito.anno);
	
	printf("data restituzione(inserire g m a):   ");
	scanf("%d%d%d", &books->data_restituzione.giorno, &books->data_restituzione.mese, &books->data_restituzione.anno);
	
}

int cercaISBN(libro v[], int n, int isbn){
	int i=0;
	for(i=0; i<n; i++){
		if(strcmp(v[i].isbn)==0){
			return i;
		}
		
		
		
	}
	return -1;
	
}


int main(){
	libro *books;
	int n=0;
	int scelta;
	int isbn;
	int i=0;
	int temp;
	
	do{
		printf("1) inserisci il libro");
		printf("2) visualizza tutti i libri\n");
		printf("3) presta libro");
		printf("4) cerca isbn");
		printf("5) libri in prestito");
		printf("0) esci");
		scanf("%d", &scelta);
		
		switch(scelta){
			case 0:
			(exit);
			case 1:
			inseriscilibro(&books[n]);
			n++;
			break;
			
			case 2:
			for(i=0; i<n; i++){
				stampalibro(books[i]);
			}
			
			case 3:
			printf("ISBN: ");
			scanf("%d",&isbn);
			
			case 4:
			temp=prestalibro(books, n, isbn);
			if(temp!=-1){
				printf("il libro non e stato trovato");
			}
			case 5:
			for( i=0; i<n; i++){
				if(libri[i].copie_disponibili< libri[i].copie_totali){
					stampalibro(books[i]);
					
				}
			}break;
		
	}while(scelta !=0);
	
	return 0;
}