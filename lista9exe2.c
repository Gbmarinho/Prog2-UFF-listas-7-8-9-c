#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct data {
    int dia;
    int mes;
    char nomeMes[12];
} Data;

int main()
{
    Data aniversarios[3] = { {5,1,"JANEIRO"},
    {4,2,"FEVEREIRO"},{10,3,"MAIO"} };
    int a;
    Data *p_dt;
    p_dt=&aniversarios[2];
    printf("Nome do mes %d eh: %s.", p_dt->mes, p_dt->nomeMes);
    strcpy(p_dt->nomeMes, "MAR�O");
    printf("\nNumero de letras : %d", strlen(p_dt->nomeMes));
    Data *p_dt2;
    p_dt2 = &aniversarios[0];

    printf("\n\nA) O erro deste programa era a alocacao dinamica do segundo ponteiro, que no caso nao eh necessario pois a estrutura ja\nfoi declarada e ja recebeu valores");

    printf("\nB) Eh mostrado o numero 5, pois ha 4 letras em 'MAIO' mais o caractere de fim de string.\n\n");

    return 0;
}
