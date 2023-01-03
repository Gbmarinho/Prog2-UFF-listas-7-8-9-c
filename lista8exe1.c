#include <stdio.h>
#include <stdlib.h>

int verificaSomasDeLinhasIguais(int matriz1[3][4]){
    int somas[3],i ,j, soma = 0, cont = 0;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            soma = soma + matriz1[i][j];
        }
        somas[cont] = soma;
        cont++;
        soma = 0;
    }
    for(i=1;i<3;i++){
        if(somas[0] != somas[i]){
            return 1;
        }
    }
    return 0;
}

int main(){
    int matriz1[3][4] = {{1,1,1,1},{1,1,1,1},{1,1,1,1}}, verifica;
    verifica = verificaSomasDeLinhasIguais(matriz1);
    if(verifica == 0){
        printf("A soma de todos as linhas da matriz da o mesmo resultado!");
    }
    if(verifica == 1){
        printf("A soma de todos as linhas da matriz nao da o mesmo resultado!");
    }
    return 0;
}
