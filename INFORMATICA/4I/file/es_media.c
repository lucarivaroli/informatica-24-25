/*inserire le informazoni di studenti: 
nome - eta- media voti scolastici
determinare lo studente con la media scolastica piu alta*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[20];
    int eta;
    float media;
}studente;

void scrivistudente(char *nome_file, int n_studenti){
    FILE *f= fopen(nome_file, "ab");
    if(f==NULL){
        printf("errore\n");
        return; 
    }
    for(int i=0; i<n_studenti; i++){
        studente s;
        printf("inserisci nome studente: ");
        scanf("%s", s.nome);
        printf("inserisci eta studente: ");
        scanf("%d", &s.eta);
        printf("inserisci media voti studente: ");
        scanf("%f", &s.media);
        getchar();
        fwrite(&s, sizeof(studente), 1, f);
    }
    fclose(f);
    if(ferror(f)){
        printf("errore scrittura\n");
    }

}

studente* leggistudente(char *nome_file, studente *array){
    FILE *f= fopen(nome_file, "rb");
    if(f==NULL){
        printf("errore\n");
        return array; 
    }
    int i=0;
    array= (studente*) realloc(array, sizeof(studente));

    while(fread(&array[i], sizeof(studente), 1, f)==1){
        i++;
        array= (studente*) realloc(array, (i+1)*sizeof(studente));
    }
    array= (studente*) realloc(array,i*sizeof(studente));
    fclose(f);
     if(ferror(f)){
        printf("errore lettura\n");
    }
    return array;
}

studente* trovamigliore(studente *array){
    int dim= sizeof(array)/sizeof(studente);
    studente best= {"",0,0.0};
    for(int i=0; i<dim; i++){
        if(array[i].media> best.media){
            best.media=array[i].media;
            best.eta=array[i].eta;
            strcpy(best.nome, array[i].nome);
        }
    }
    return best;

}
