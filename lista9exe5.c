#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct endereco {
    char rua[100]; /* Nome da rua */
    int numero; /* Numero do imovel */
} Endereco;

typedef struct notas {
    float p1, p2, p3; /* Notas nas provas */
} Notas;

typedef struct aluno {
    int mat; /* Matricula do aluno */
    char nome[81]; /* Nome do aluno */
    Notas nota; /* Notas nas provas */
    Endereco *end; /* Endereco do aluno */
} Aluno;

Aluno **alocaAlunos(int n);

void liberaAlunos(Aluno **a, int n);

void atribui(Aluno **a, int indice, int matricula, char *nome, float nota1, float nota2, float nota3, char *nomeRua, int numero);

void imprime(Aluno **a, int indice);


int main() {
    Aluno **alunos;
    alunos = alocaAlunos(3);
    atribui(alunos,0,10,"Um",1,1,1,"Getulio Vargas",100);
    atribui(alunos,1,20,"Dois",8,8,8,"Amaral Peixoto",200);
    atribui(alunos,2,30,"Tres",9,9,9,"Ouro Verde",300);

    imprime(alunos, 0);
    imprime(alunos, 1);
    imprime(alunos, 2);

    liberaAlunos(alunos, 3);
    system("pause");
    return 0;
}

Aluno **alocaAlunos(int n) {
    Aluno **vetPont;

    vetPont = (Aluno **) malloc(n * sizeof(Aluno *));
    if(vetPont == NULL) { printf("Sem memoria para alocacao.\n"); exit(1); }

    for(int i = 0; i < n; i++) {
        vetPont[i] = (Aluno *) malloc(sizeof(Aluno));
        if(vetPont[i] == NULL) { printf("Sem memoria para alocacao.\n"); exit(1); }
    }

    for(int i = 0; i < n; i++) {
        vetPont[i][0].end = (Endereco *) malloc(sizeof(Endereco));
        if(vetPont[i][0].end == NULL) { printf("Sem memoria para alocacao.\n"); exit(1); }
    }

    return vetPont;
}

void liberaAlunos(Aluno **a, int n) {
    for(int i = 0; i < n; i++) {
        free(a[i][0].end);
        free(a[i]);
    }

    free(a);
}

void atribui(Aluno **a, int indice, int matricula, char *nome, float nota1, float nota2, float nota3, char *nomeRua, int numero) {
    a[indice][0].mat = matricula;
    strcpy(a[indice][0].nome, nome); //a[indice][0].nome = nome;
    a[indice][0].nota.p1 = nota1;
    a[indice][0].nota.p2 = nota2;
    a[indice][0].nota.p3 = nota3;
    strcpy(a[indice][0].end->rua, nomeRua); //a[indice][0].end->rua = nomeRua;
    a[indice][0].end->numero = numero;
}

void imprime(Aluno **a, int indice) {
    printf("\n\n", indice);

    printf("Nome: %s     Matricula: %d\n", a[indice][0].nome, a[indice][0].mat);
    printf("Nota 1: %.2f     Nota 2: %.2f    Nota 3: %.2f\n", a[indice][0].nota.p1, a[indice][0].nota.p2, a[indice][0].nota.p3);
    printf("Endereco Rua: %s     Numero: %d\n\n", a[indice][0].end->rua, a[indice][0].end->numero);
}
