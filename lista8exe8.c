#include <stdio.h>
#include <stdlib.h>
#include <string.h>
bolha(int n, char *vetor);
quicksort(int n, char*vetor);
int sortstring( const void *str1, const void *str2 ){
    char *const *pp1 = str1;
    char *const *pp2 = str2;
    return strcmp(*pp1, *pp2);
}
int main(){
    char *carac, *caracb, *caracq;
    scanf("%s", carac);
    strcpy(caracb,carac);
    strcpy(caracq,carac);
    bolha(strlen(caracb), caracb);
    quicksort(strlen(caracq), caracq);
    qsort(carac,strlen(carac),sizeof(char),sortstring);
}
bolha(int n, char *vetor){
    int fim,i;
    for (fim=n-1; fim>0; fim--){
        for (i=0; i<fim; i++){
            if (vetor[i]>vetor[i+1]) {
                char temp = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = temp;
            }
        }
    }
}
quicksort(int n, char *vetor){
        int x = vetor[0];
        int a = 1;
        int b = n-1;
        do {
            while (a < n && vetor[a] <= x) a++;
            while (vetor[b] > x) b--;
            if (a < b) {
                int temp = vetor[a];
                vetor[a] = vetor[b];
                vetor[b] = temp;
                a++; b--;
            }
        } while (a <= b);
        vetor[0] = vetor[b];
        vetor[b] = x;
        quicksort(b,vetor);
        quicksort(n-a,&vetor[a]);
}
