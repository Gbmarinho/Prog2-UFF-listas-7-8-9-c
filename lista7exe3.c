#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define TAM 5

int multiplo(int NumeroMultiplicado, int numero){
    int vetor[numero];
    int i;
    for(i = 0; i < numero; ++i){
        vetor[i] = i;
        vetor[i] = vetor[i] * NumeroMultiplicado;
    }
    for(i = 0; i < numero; ++i){
    printf("O %d multiplo de %d e' = %d\n",i+1,NumeroMultiplicado, vetor[i]);
    }
    printf("\n");
}
int main(){
    int multiplo(int NumeroMultiplicado, int numero);
    int valor;
    printf("Digite quantos multiplos de 5 voce deseja: ");
    scanf("%d",&valor);
    multiplo(TAM, 10);
    multiplo(TAM,valor);
    return 0;
}
