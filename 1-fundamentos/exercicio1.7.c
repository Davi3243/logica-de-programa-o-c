#include <stdio.h>
int main (void) { 


/*
O programa deverá:
1. Declarar duas variáveis inteiras, a e b.
2. Solicitar ao usuário o primeiro número.
3. Solicitar o segundo número.
4. Mostrar as cinco operações: soma, subtração, multiplicação, divisão inteira e resto.
*/



int a, b;

printf("=====================================================\n");


printf("Digite o valor de a: ");
scanf("%d", &a);

printf("Digite o valor de b: ");
scanf ("%d", &b); 

printf("A soma de (a) + (b) é: %d\n", a + b);
 

printf("=====================================================\n");


printf("Digite o valor de a: ");
scanf("%d", &a);

printf("Digite o valor de b: ");
scanf("%d", &b);

printf("A subtração de (a) - (b) é: %d\n", a - b);


printf("=====================================================\n");


printf("Digite o valor de a: ");
scanf("%d", &a);

printf("Digite o valor de b: ");
scanf("%d", &b); 

printf("A multiplicação de (a) * (b) é: %d\n", a * b);

printf("=====================================================\n");


printf("Digite o valr de a: ");
scanf("%d", &a);

printf("Digite o valor de b: ");
scanf("%d", &b);

printf("A divisão de (a) / (b) é: %d\n", a / b);
 

printf("=====================================================\n");

printf("Calculando o resto da divisão entre (a) e (b)\n");
printf("O resto da divisão entre (a) e (b) é: %d\n", a % b);

printf("=====================================================\n");
return 0;

}