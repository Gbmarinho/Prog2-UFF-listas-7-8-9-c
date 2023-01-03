#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * estado[27] =
    {"AC","AL","AM","AP","BA","CE","DF","ES","GO","MA","MG","MS","MT","PA",
    "PB","PE","PI","PR","RJ","RN","RO","RR","RS","SC","SE","SP","TO"};
typedef struct assalariados {
    char nome[51];
    char sexo;
    int idade;
    float salario;
    char estado[3];
} Assalariados;
Assalariados * cadastra(char *nome, char sexo, int idade, float salario, char *estado);
void relatorio(Assalariados ** ptr, int numAssalariados);
void imprime(Assalariados ** ptr, int numAssalariados);


main(void) {
    Assalariados **pessoas;
    int numAssalariados = 3;
    pessoas = (Assalariados **) malloc(numAssalariados * sizeof(Assalariados *));
    pessoas[0] = cadastra("Fulano de tal", 'M',45,1500.00, "RJ");
    pessoas[1] = cadastra("Ciclano", 'M',50,2500.00, "RS");
    pessoas[2] = cadastra("Beltrano", 'M',42,500.00, "RS");
    imprime(pessoas, numAssalariados);
    relatorio(pessoas,numAssalariados);
}
Assalariados * cadastra(char *nome, char sexo, int idade, float salario, char *estado){
    Assalariados *p;

    p = (Assalariados *) malloc(sizeof(Assalariados));
    if(p == NULL){printf("Erro!Nao ha memoria"); exit(1);}

    strcpy(p->nome, nome);
    p->sexo = sexo;
    p->idade = idade;
    p->salario = salario;
    strcpy(p->estado, estado);

    return p;
}
void imprime(Assalariados ** ptr, int numAssalariados){
    int i;
    for(i=0; i<numAssalariados; i++){

        printf("Nome: %s\n", ptr[i]->nome);
        printf("Sexo: %c\n", ptr[i]->sexo);
        printf("Idade: %d\n", ptr[i]->idade);
        printf("Salario: %f\n", ptr[i]->salario);
        printf("Estado: %s\n\n", ptr[i]->estado);
    }

}
void relatorio(Assalariados ** ptr, int numAssalariados){
    int i, cont = 0, j;
    char *vetor[27] = {"AC","AL","AM","AP","BA","CE","DF","ES","GO","MA","MG","MS","MT","PA",
    "PB","PE","PI","PR","RJ","RN","RO","RR","RS","SC","SE","SP","TO"}, *estados;
    int vetorCont[27] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, resultado;
    for(i=0;i<numAssalariados;i++){
        cont = 0;
        if(ptr[i]->idade >= 40){
            if(ptr[i]->salario >= 1000){
                for(j=0;j<27;j++){
                    resultado = strcmp(ptr[i]->estado, vetor[j]);
                    if(resultado == 0){
                        vetorCont[j] = vetorCont[j] + 1;
                    }
                }
            }
        }
    }
    printf("\n");
    for(i=0;i<27;i++){
        if(vetorCont[i]>0){
            printf("\nEstado=%s com %d homens maiores de 40 anos e salário maior que R$ 1000,00",vetor[i], vetorCont[i]);
        }
    }
}
