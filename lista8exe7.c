#include <stdio.h>
#include <stdlib.h>


int main(){
    int distancia[5][5] ={{00,15,30,05,12},{15,00,10,17,28},{30,10,00,03,11},{05,17,03,00,80},{12,28,11,80,00}}, i, j;
    int x = 1, y = 1, km;
    printf("Matriz de distancia das cidades: \n");
    printf(" C1 C2 C3 C4 C5\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(j<i){
                printf("   ");
            }else{
                if(distancia[i][j]<10){
                    printf(" 0%d", distancia[i][j]);
                }else{
                    printf(" %d", distancia[i][j]);
                }
            }
        }
        printf(" C%d", i+1);
        printf("\n");
    }
    printf("\nDigite: 0 0 para sair do loop\n");
    while(x != 0 && y != 0){
        printf("Diga a cidade de origem e para qual quer deslocar: ");
        scanf("%d %d", &x, &y);
        fflush(stdin);
        if(x==0 && y==0){
            break;
        }
        km = distancia[x-1][y-1];
        printf("-==--==--==--==--==--==--==--");
        printf("\nA distancia da cidade %d para %d eh de: %dkm\n\n", x, y, km);
        printf("-==--==--==--==--==--==--==--\n");
    }
    printf("\n\n");

    int vetor[7] = {1,2,3,2,5,1,4}, soma = 0, cont = 0;
    for(i=0;i<6;i++){
        soma = soma + distancia[vetor[cont]-1][vetor[cont+1]-1];
        cont++;
    }
    printf("Dado o percurso: 1,2,3,2,5,1,4, teremos que o total do percurso eh: %dkm\n", soma);
    return 0;
}
