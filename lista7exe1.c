#include <stdio.h>
void f1 ( int v) {
 v = v + 1;
 printf (" f1 = %d\n " , v );
}
void f2 ( int *v) {
 *v = *v + 1;
 printf (" f2 = %d\n " , *v );
}
int f3 ( int v) {
 v = v + 1;
 printf (" f3 = %d\n " , v );
 return v;
}
int main (void) {
 int v = 1;
 f1 ( v ); // IRÁ PRINTAR f1 = 2 POIS NO MAIN FOI DECLARADO QUE V VALIA 1 E A FUNÇÃO F1 SOMOU MAIS 1 AO INT V
 f2 (&v ); // IRÁ PRINTAR f2 = 2 A FUNÇÃO RECEBEU COMO PARÂMETRO O ENDEREÇO DE V E NA FUNÇÃO SOMOU MAIS UM COM O VALOR QUE ESTAVA NO ENDEREÇO, ASSIM FICANDO COM O VALOR DE 2
 v = f3 ( v ); // IRÁ PRINTAR f3 = 3 COMO A FUNÇÃO f2 ALTEROU O VALOR NO ENDEREÇO DE V, O V PASSOU A VALER 2, E A FUNÇÃO f3 SOMA AO V MAIS 1, ASSIM FICANDO V = 3
 printf (" main = %d \n" , v ); // IRÁ PRINTAR main = 3 JÁ QUE A ÚLTIMA ALTERAÇÃO DENTRO DO MAIN FEITA NO V FOI TRANFORMAR O V = 3
 return 0;
}
