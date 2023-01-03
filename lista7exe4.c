#include <stdio.h>
#include <stdlib.h>
#include<string.h>

// procedimento que converte uma string para minúsculo
char minusculo(){
    char s1[126] = {};
    char s2[126];
    printf("Digite a frase que deseja: ");
    scanf("\n%", &s1);
    int i = 0;
    while(s1[i] != '\0'){
        s2[i] = tolower(s1[i]);
        i++;
    }
    s2[i] = '\0'; // caracteer que indica o fim da string
    return s2;
}

int main() {
    char str = minusculo();
    printf("String minuscula: %s\n", str);

    return 0;
}
