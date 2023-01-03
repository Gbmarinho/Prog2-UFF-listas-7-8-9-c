/* 5. Faça um programa que, dados duas matrizes, chame funções para retornar:
a) a soma destas duas matrizes */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calc_soma(int *mat_A, int *mat_B, int *mat_C);

void main()
{
    setlocale(LC_ALL, "Portuguese");

    int mat_A[3][3];
    int mat_B[3][3];
    int mat_C[3][3];

    int i;
    int j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o número da matriz A na posição [%d][%d] :", i, j);
            scanf_s("%d", &mat_A[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o número da matriz B na posição [%d][%d] :", i, j);
            scanf_s("%d", &mat_B[i][j]);
        }
    }

    calc_soma(mat_A, mat_B, mat_C);
}

void calc_soma(int *mat_A, int *mat_B, int *mat_C)
{
    int lin, col;

    printf("Matriz A:\n");

    for (lin = 0; lin < 3; lin++)
    {
        for (col = 0; col < 3; col++)
        {
            printf("\t%d", mat_A[lin * 3 + col]);
        }
        printf("\n");
    }

    printf("Matriz B:\n");

    for (lin = 0; lin < 3; lin++)
    {
        for (col = 0; col < 3; col++)
        {
            printf("\t%d", mat_B[lin * 4 + col]);
        }
        printf("\n");
    }

    for (lin = 0; lin < 3; lin++)
    {
        for (col = 0; col < 3; col++)
        {
            mat_C[lin * 3 + col] = mat_A[lin * 3 + col] + mat_B[lin * 3 + col];
        }
    }

    printf("Matriz C:\n");

    for (lin = 0; lin < 3; lin++)
    {
        for (col = 0; col < 3; col++)
        {
            printf("\t%d", mat_C[lin * 3 + col]);
        }
        printf("\n");
    }
}
