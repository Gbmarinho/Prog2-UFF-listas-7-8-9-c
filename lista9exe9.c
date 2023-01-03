#include<stdio.h>
#include<stdlib.h>

typedef struct aluno{
    int media;
    int inscr;
}ALUNO;

main(){
    ALUNO turma[] = {{8, 1}, {10, 2}, {7, 3}, {2, 4}};
    int i, foraOrdem , jaOrdenados = 0, tam;
    ALUNO temp;
    do {
        foraOrdem = 0;
        for (i = 0; i < 4 - 1 - jaOrdenados ; i++) {
            if (turma[i]. media > turma[i+1]. media) {
                temp = turma[i];
                turma[i] = turma[i+1];
                turma[i+1] = temp ;
                foraOrdem = 1;
            }
        }
        jaOrdenados ++;
    } while ( foraOrdem );

    printf("Apos a ordenacao do vetor de estruturas: \n\n");
    for(i=0; i<4; i++){
        printf("Media: %d\n", turma[i].media);
        printf("Inscricao: %d\n", turma[i].inscr);
    }
}
