#include <stdio.h>
#include <stdlib.h>


int main(){
    int i, j, tabuleiro[9][9] = {{1,3,0,5,4,0,2,1},{1,0,1,0,0,1,0,0,0},{0,0,0,0,1,0,6,0},{1,0,0,1,1,0,0,1},{0,1,0,4,0,0,1,0},{0,0,3,1,0,0,1,1},{1,0,6,6,0,0,1,0},{1,0,5,0,1,1,0,6}};
    int contPe = 0, contTo = 0,contRe = 0,contRa = 0,contCa = 0,contBi = 0,contSemPeca = 0, somaPe = 0, somaBi = 0;
    printf("Tabuleiro: \n\n");
    for(i=0;i<9;i++){
        printf("%d %d %d %d %d %d %d %d\n", tabuleiro[i][0], tabuleiro[i][1], tabuleiro[i][2], tabuleiro[i][3], tabuleiro[i][4], tabuleiro[i][5], tabuleiro[i][6], tabuleiro[i][7]);
    }
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if(tabuleiro[i][j] == 0){
                contSemPeca++;
            }
            if(tabuleiro[i][j] == 1){
                contPe++;
                somaPe = somaPe + tabuleiro[i][j];
            }
            if(tabuleiro[i][j] == 2){
                contCa++;
            }
            if(tabuleiro[i][j] == 3){
                contTo++;
            }
            if(tabuleiro[i][j] == 4){
                contBi++;
                somaBi = somaBi + tabuleiro[i][j];
            }
            if(tabuleiro[i][j] == 5){
                contRe++;
            }
            if(tabuleiro[i][j] == 6){
                contRa++;
            }
        }
    }
    printf("Resultados: \n\n");
    printf("Quantidade de ausencia de pecas: %d\nQuantidade de peoes: %d\nQuantidade de Cavalos: %d\n", contSemPeca, contPe, contCa);
    printf("Quantidade de torres: %d\nQuantidade de bispos: %d\nQuantidade de reis: %d\nQuantidade de rainhas: %d\n",contTo, contBi, contRe, contRa);
    printf("Soma de peoes: %d\nSoma de Bispos: %d\n", somaPe, somaBi);
    return 0;
}
