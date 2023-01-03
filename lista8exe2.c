#include <stdio.h>
#include <stdlib.h>


int main(){
    int matriz1[3][4], matriz2[3][4], i, j, matrizSoma[3][4];
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("Digite um numero para matriz1 posicao[%d, %d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("Digite um numero para matriz2 posicao[%d, %d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            matrizSoma[i][j] = matriz1[i][j]+matriz2[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("\nA soma da posicao[%d, %d] das duas matrizes eh: %d\n", i, j, matrizSoma[i][j]);
        }
    }

    return 0;
}
