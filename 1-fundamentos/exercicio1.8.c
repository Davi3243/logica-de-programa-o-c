#include <stdio.h>
int main (void) {

/*
Na calculadora que vamos construir, podemos pedir os dois números uma única vez e reutilizar as mesmas variáveis nas cinco operações.
Por exemplo, se o usuário digitar 20 e 6, o programa pode calcular:
- Soma: 26
- Subtração: 14
- Multiplicação: 120
- Divisão inteira: 3
- Resto: 2
Tudo isso usando os mesmos valores, sem repetir os scanf().
*/

int a, b; 

printf("Digite o valor de a: ");
scanf("%d", &a);

printf("Digite o valor de b: ");
scanf("%d", &b);

printf("A soma de (a) + (b) é: %d\n", a + b);
printf("A subtração de (a) - (b) é: %d\n", a - b);
printf("A multiplicação de (a) * (b) é: %d\n", a * b);
printf("A divisão de (a) / (b) é: %d\n", a / b);    
printf("O resto da divisão de (a) %% (b) é: %d\n", a % b);

return 0;

}