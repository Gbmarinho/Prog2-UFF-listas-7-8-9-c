int main(){
    char frase[81], frase2[81];;
    char fraseNova[81];
    int contador = 0, i, cont = 1, ajuda = 0;
    printf("Digite uma frase: ");
    scanf("  %80[^\n]", &frase);
    for(i=0;i<81;i++){
        if(frase[i]=='\0'){
            break;
        }
        if(frase[i] != ' '){
            fraseNova[contador] = frase[i];
            contador++;
        }
    }
    printf("%s\n", fraseNova);
    for(i=0;i<81;i++){
        if(fraseNova[i]=='\0'){
            frase2[i-2]=='\0';
            break;
        }
        if(cont==6){
            cont = 1;
        }
        if(fraseNova[i]>='A' && fraseNova[i]<='Z'){
            if((fraseNova[i]+cont) > 'Z'){
                frase2[i] = 65+cont-('Z' - fraseNova[i]);
                cont++;
            }else{
                frase2[i] = fraseNova[i]+cont;
                cont++;
            }
        }
        if(fraseNova[i]>='a' && fraseNova[i]<='z'){
            if((fraseNova[i]+cont) > 'z'){
                frase2[i] = (97+cont-('z' - fraseNova[i]));
                cont++;
            }else{
                frase2[i] = (fraseNova[i]+cont);
                cont = cont + 1;
            }
        }
    }
    printf("%s", frase2);
    return 0;
}
