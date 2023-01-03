/* 5. Faça um programa que, dados duas matrizes, chame funções para retornar:
b) a soma das diagonais de cada matriz (atualize os parâmetros passados por referência)*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int calc_diagonal(int **, int **, int); /*protótipo da função*/

int main(void)
{

    int i = 0;
    int j = 0;
    int **mat_A;
    int **mat_B;
    int n = 0;

    printf("Digite o tamanho das matrizes: ");
    scanf("%d", &n);

    mat_A = malloc(sizeof(int *) * n);
    for (i = 0; i < n; i++){
        mat_A[i] = malloc(sizeof(int) * n);
    }

    mat_B = malloc(sizeof(int *) * n);
    for (i = 0; i < n; i++){
        mat_B[i] = malloc(sizeof(int) * n);
    }

    calc_diagonal(mat_A, mat_B, n);

    /** Liberar memoria apenas depois de usar a matriz A **/
    for (i = 0; i < n; i++){
        free(mat_A[i]);
    }
    free(mat_A);

    /** Liberar memoria apenas depois de usar a matriz B **/
    for (i = 0; i < n; i++){
        free(mat_B[i]);
    }
    free(mat_B);

    return 0;
}

int calc_diagonal(int **mat_A, int **mat_B, int n)
{

    int calc_diagonal = 0, calc_diagonalB = 0; // inicializa a soma da diagonal
    int i, j;
    int sm = 0, smB = 0;

    // processa matriz
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Digite os valores da lin[%d] col[%d] matriz A: ", i,j);
            scanf("%d", &mat_A[i][j]);
        }
    }
    
    for (i = 0; i < n; i++) {
        sm = sm + mat_A[i][i];
        calc_diagonal = sm;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
        {
            printf("Digite os valores da lin[%d] col[%d] matriz B: ", i, j);
            scanf("%d", &mat_B[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        smB = smB + mat_B[i][i];
        calc_diagonalB = smB;
    }

    // monta a matriz A
    printf("Matriz A: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\t%d", mat_A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // monta a matriz B
    printf("Matriz B: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\t%d", mat_B[i] [j]);
        }
        printf("\n");
    }

    printf("\nO valor da soma da diagonal da Matriz A eh %d", calc_diagonal);
    printf("\nO valor da soma da diagonal da Matriz B eh %d", calc_diagonalB);

    return 0;
}
