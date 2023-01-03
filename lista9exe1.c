#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 3

typedef struct data {
    int dia, mes, ano;
} Data;

typedef struct local {
    char ender[81]; /* endereo do local de provas */
    int sala; /* numero sala */
} Local;

typedef struct notas {
    float geral; /* prova de conhecimentos gerais */
    float especifica; /* prova de conhecimentos especificos */
} Notas;

typedef struct candidato {
    int inscr; /* numero de inscricao */
    char nome[81]; /* nome do candidato */
    Data nasc; /* data de nascimento */
    Local *loc; /* local de prova */
    Notas nt; /* notas de prova */
} Candidato;

void inicializa (int n, Candidato** pessoas);
void preenche(int n, Candidato **, int i);
void imprime_tudo (int n, Candidato** pessoas);
void retira (int n, Candidato** pessoas, int i);
void altera(int n, Candidato** pessoas, int i);

main(){
    Candidato* pessoas[MAX];
    int n = MAX;
    int resp, part;

    inicializa(n, pessoas); /*inicializando o numero de estruturas a serem colocadas em um vetor*/

    preenche(n,pessoas, 0); /*preenche as 3 posicoes do vetor*/
    preenche(n,pessoas, 1);
    preenche(n,pessoas, 2);

    printf("Menu de opcoes: \nDigite 1 se quiser imprimir algum dado especifico, digite 2 se quiser imprimir todos os dados\nou digite 3 se quiser alterar dados de alguem e imprimir: ");
    scanf("%d", &resp);
    fflush(stdin);

    if(resp == 2){
        imprime_tudo(n, pessoas);
    }
    if(resp == 1){
        printf("\nDe 1 a 3, qual participante deseja imprimir os dados? ");
        scanf("%d", &part);
        fflush(stdin);
        part = part - 1;
        imprime(n, pessoas, part);
    }
    if(resp == 3){
        printf("\nQual participantes de 1 a 3 deseja alterar os dados? ");
        scanf("%d", &part);
        fflush(stdin);
        part = part - 1;
        altera(n, pessoas, part);
        printf("\nAlterado com sucesso.");
        imprime(n, pessoas, part);
    }

    retira(n, pessoas, 0);
    retira(n, pessoas, 1);
    retira(n, pessoas, 2);
}

void inicializa (int n, Candidato** pessoas)
{
    int i;
    for (i=0; i<n; i++)
        pessoas[i] = NULL;
}
void preenche (int n, Candidato** pessoas, int i)
{
    if (i<0 || i>=n) {
        printf("Indice fora do limite do vetor\n");
        exit(1); /* aborta o programa */
    }
    if (pessoas[i]==NULL){
        pessoas[i] = (Candidato*)malloc(sizeof(Candidato));
        Local *loc_p = (Local *) malloc(sizeof(Local));
        printf("\nEntre com o numero de inscricao: ");
        scanf("%d", &pessoas[i]->inscr);
        fflush(stdin);
        printf("\nEntre com o nome: ");
        scanf("%81[^\n]", pessoas[i]->nome);
        fflush(stdin);
        printf("\nEntre com dia, mes e ano de nascimento: ");
        scanf("%d %d %d", &pessoas[i]->nasc.dia, &pessoas[i]->nasc.mes , &pessoas[i]->nasc.ano);
        fflush(stdin);
        printf("\nEntre com rua: ");
        scanf("%81[^\n]", loc_p->ender);
        fflush(stdin);
        printf("\nEntre com numero do local: ");
        scanf("%d", &loc_p->sala);
        pessoas[i]->loc = loc_p;
        fflush(stdin);
        printf("\nEntre com as notas de conhecimento geral e da especifica: ");
        scanf("%f %f", &pessoas[i]->nt.geral, &pessoas[i]->nt.especifica);
    }
}
void imprime_tudo (int n, Candidato** pessoas)
{
    int i;
    for (i=0; i<n; i++)
        imprime(n,pessoas,i);
}
void imprime (int n, Candidato** pessoas, int i)
{
    if (i<0 || i>=n) {
        printf("Indice fora do limite do vetor\n");
        exit(1); /* aborta o programa */
    }
    if (pessoas[i] != NULL)
    {
        printf("\nInscricao: %d\n", pessoas[i]->inscr);
        printf("Nome: %s\n", pessoas[i]->nome);
        printf("Dia, mes e ano de nascimento: %d %d %d\n", pessoas[i]->nasc.dia, pessoas[i]->nasc.mes, pessoas[i]->nasc.ano);
        printf("Rua e numero do local: %s %d\n", pessoas[i]->loc->ender, pessoas[i]->loc->sala);
        printf("Notas de conhecimento geral e especifica: %f %f", pessoas[i]->nt.geral, pessoas[i]->nt.especifica);
    }
}
void retira (int n, Candidato** pessoas, int i)
{
    if (i<0 || i>=n) {
        printf("Indice fora do limite do vetor\n");
        exit(1); /* aborta o programa */
    }
    if (pessoas[i] != NULL)
    {
        free(pessoas[i]);
        pessoas[i] = NULL; /* indica que na posio no mais existe dado */
    }
}
void altera(int n, Candidato** pessoas, int i){
    if (i<0 || i>=n) {
        printf("Indice fora do limite do vetor\n");
        exit(1); /* aborta o programa */
    }
    if (pessoas[i]!=NULL){
        pessoas[i] = (Candidato*)malloc(sizeof(Candidato));
        Local *loc_p = (Local *) malloc(sizeof(Local));
        printf("\nEntre com o numero de inscricao: ");
        scanf("%d", &pessoas[i]->inscr);
        fflush(stdin);
        printf("\nEntre com o nome: ");
        scanf("%81[^\n]", pessoas[i]->nome);
        fflush(stdin);
        printf("\nEntre com dia, mes e ano de nascimento: ");
        scanf("%d %d %d", &pessoas[i]->nasc.dia, &pessoas[i]->nasc.mes , &pessoas[i]->nasc.ano);
        fflush(stdin);
        printf("\nEntre com rua: ");
        scanf("%81[^\n]", loc_p->ender);
        fflush(stdin);
        printf("\nEntre com numero do local: ");
        scanf("%d", &loc_p->sala);
        pessoas[i]->loc = loc_p;
        fflush(stdin);
        printf("\nEntre com as notas de conhecimento geral e da especifica: ");
        scanf("%f %f", &pessoas[i]->nt.geral, &pessoas[i]->nt.especifica);
    }
    else{
        printf("Dados ainda nao fornecidos para que sejam alterados");
    }
}
