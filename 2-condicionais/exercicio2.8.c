#include <stdio.h>

int main (void){

int numero;

printf("Digite um numero: ");
scanf("%d", &numero);

if ( numero >= 10 && numero <= 50) {
    printf("Está dentro do intervalo!");
} else {
    printf("Está fora do intervalo!");
}
return 0;
}