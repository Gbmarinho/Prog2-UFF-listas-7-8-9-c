#include <stdio.h>
#include <stdlib.h>
#define MAX 2

int posicao = 0;

typedef struct aluno
{
    char nome[40];
    float n1, n2, notaProva, media;
} Aluno;

Aluno n[MAX];

int main(void)
{
    struct aluno turma[MAX];
    le(turma);
    puts("Imprimindo dados lidos da turma.");
    puts("Digite qualquer coisa para continuar.");
    getchar();
    imprime(turma);
    ordena_medias(turma);
    puts("Imprimindo dados ordenados da turma.");
    puts("Digite qualquer coisa para continuar.");
    getchar();
    imprime(turma);
    puts("Digite qualquer coisa para continuar.");
    getchar();
}

void le(Aluno turma[MAX])
{
    int soma;
    for (int i = 0; i < MAX; i++)
    {
        printf("\nDigite o nome do aluno: ");
        scanf("%s", &turma[posicao].nome);
        fflush(stdin);
        printf("\nDigite a Nota 1 do aluno: ");
        scanf("%g", &turma[posicao].n1);
        printf("\nDigite a Nota 2 do aluno: ");
        scanf("%g", &turma[posicao].n2);

        soma = turma[posicao].n1 + turma[posicao].n2; // Acumulando o resultado das notas das provas
        turma[posicao].media = soma / MAX;
        posicao = posicao + 1;
    }
    
    printf("\n");
};

void imprime(Aluno turma[MAX])
{
    for (int i = 0; i < MAX; i++)
    {
        printf("\nDados do aluno \n");
        printf("Nome: %s, nota 1: %g , nota 2: %g , media: %f\n", turma[i].nome, turma[i].n1, turma[i].n2, turma[i].media);
    }
};

void ordena_medias(Aluno turma[MAX])
{
    int i, foraOrdem, jaOrdenados = 0;
    Aluno temp;
    do
    {
        foraOrdem = 0;
        for (i = 0; i < MAX - 1 - jaOrdenados; i++)
        {
            if (turma[i].media > turma[i + 1].media)
            {
                temp = turma[i];
                turma[i] = turma[i + 1];
                turma[i + 1] = temp;
                foraOrdem = 1;
            }
        }
        jaOrdenados++;
    } while (foraOrdem);
}
