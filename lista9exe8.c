#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct data {
    int dd, mm, aa; /* Dia, mes e ano */
};
typedef struct data Data;

struct compromisso {
    char descricao[81]; /* Descricao do compromisso */
    Data dta; /* Data do compromisso */
};
typedef struct compromisso Compromisso;

Compromisso* busca(int n, Compromisso** vet, int d, int m, int a){
    Compromisso *procura;
    char sla[81];
    int cont = 0;
    int i, meio = n/2;
    procura = (Compromisso*) malloc(sizeof(Compromisso));
    if(procura==NULL){
        exit(1);
    }
    for(i=0;i<n;i++){
        if(a>vet[meio]->dta.aa){
            meio++;
        }else if(a<vet[meio]->dta.aa){
            meio--;
        }else{
            if(m>vet[meio]->dta.mm){
                meio++;
            }else if(m<vet[meio]->dta.mm){
                meio--;
            }else{
                if(d>vet[meio]->dta.dd){
                    meio++;
                }else if(d<vet[meio]->dta.dd){
                    meio--;
                }else{
                    strcpy(procura->descricao, vet[meio]->descricao);
                    procura->dta.aa = vet[meio]->dta.aa;
                    procura->dta.mm = vet[meio]->dta.mm;
                    procura->dta.dd = vet[meio]->dta.dd;
                    cont++;
                }
            }
        }
    }
    if(cont == 0){
        return NULL;
    }else{return procura;}
}

int main(){
    Compromisso **vet, *recebe;
    int a;
    char algo[81];
    int i;
    vet = (Compromisso**) malloc(10*sizeof(Compromisso*));
    if(vet == NULL){
        exit(1);
    }
    for(i=0;i<10;i++){
        vet[i] = (Compromisso*) malloc(sizeof(Compromisso));
        if(vet[1] == NULL){
            exit(1);
        }
        printf("Escreva algo: ");
        scanf(" %80[^\n]", &vet[i]->descricao);
        vet[i]->dta.aa = 2022;
        vet[i]->dta.mm = 2+i;
        vet[i]->dta.dd = i+10;
    }
    recebe = busca(10,vet,13, 5, 2022);
    if(recebe == NULL){
        printf("Nao foi encontrado o seu compromisso");
    }else{
        printf("\n\nseu compromisso esta na lista, seu compromisso eh: %s", recebe->descricao);
        printf("\nAno: %d", recebe->dta.aa);
        printf("\nMes: %d", recebe->dta.mm);
        printf("\nDia: %d", recebe->dta.dd);

    }

    return 0;
}
