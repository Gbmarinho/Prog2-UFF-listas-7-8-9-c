#include <stdio.h>
#include <stdlib.h>

int simetrica(int a[4][4]){
    int cont=0, i, j;
    for(i=0;i<4;i++){
       for(j=0;j<4;j++){
            if(a[i][j] != a[j][i]){
                return 1;
            }
        }
    }
    return 0;
}
int main(){
    int matriz[4][4] = {{1,3,4,5},{3,6,8,9},{7,2,4,5},{3,2,1,5}}, i, j,matrizTransposta[4][4], simetria;
    printf("Matriz normal: \n");
    for(i=0;i<4;i++){
        printf("%d %d %d %d\n", matriz[i][0], matriz[i][1], matriz[i][2], matriz[i][3]);

    }
    simetria = simetrica(matriz);
    if(simetria == 1){
        for(i=0;i<4;i++){
            for(j=0;j<4;j++){
                matrizTransposta[i][j] = matriz[j][i];
            }
        }
        printf("Matriz transposta: \n");
        for(i=0;i<4;i++){
            printf("%d %d %d %d\n", matrizTransposta[i][0], matrizTransposta[i][1], matrizTransposta[i][2], matrizTransposta[i][3]);
        }
    }
    else{
        printf("Matriz simetrica!");
    }

    return 0;
}
