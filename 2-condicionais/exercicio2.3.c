#include <stdio.h>
int main(void) {

int numero;

printf("Selecione um valor: ");
scanf("%d", &numero);


if (numero % 2 == 0 ) {
printf("O valor é par");
} else { 
printf("O valor é ímpar\n");
}


return 0;


}