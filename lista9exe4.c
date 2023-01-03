#define MAX 4
#define MAXNOME 31
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void atribui(char **nomes, int indice, char *nome);
char * get_sobrenome(char *nome);


main(){
    int i;
    char **nomes;
    char *sobrenome;
    nomes = (char **) malloc(MAX*sizeof(char *));
    for ( i=0 ; i<MAX ; i++) {
    nomes[i] = (char *) malloc(sizeof(char)*MAXNOME);
    }
    atribui(nomes,0,"Fulano Silva"); atribui(nomes,1,"Maria do Carmo");
    atribui(nomes,2,"Beltrano Belmonte"); atribui(nomes,3,"Pedro dos Santos");
    for (i=0 ; i<MAX ; i++) {
        sobrenome = get_sobrenome(nomes[i]);
        printf("\n%s ", sobrenome);
        printf(" %d",strlen(sobrenome)>5?i:0); // 2o printf
    }

    printf("\n%c", nomes[0][3]); // 3o printf
    printf("\n\nNo segundo print temos que caso o tamanho do sobrenome seja maior que 5 printa o valor de i, se nao printa 0");
    printf("\n\nNo terceiro print retorna a quarta letra do primeiro indice no caso sendo\nFulando Silva o primeiro indice e a quarta letra e 'a'\n");
}

void atribui(char **nomes, int indice, char *nome){
    nomes[indice] = nome;
}
char * get_sobrenome(char *nome){
    char *sobrenome;
    sobrenome = strrchr(nome, ' ') + 1;
    return sobrenome;
}
