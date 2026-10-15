#include <stdio.h>
int main(void){

 int a = 20;

 int b = 6;

    int soma = a + b;
     // calcula a soma de a e b
     printf(" a soma de a + b é: %d\n", soma); 
     // exibe o resultado da soma na tela

    int subtracao = a - b; 
     // calcula a subtração de a e b
    printf("a subtracao de a - b é: %d\n", subtracao);
     // exibe o resultado da subtração na tela

    int multiplicacao = a * b; 
     // calcula a multiplicação de a e b
    printf("a multiplicacao de a * b é: %d\n", multiplicacao); 
     // exibe o resultado da multiplicação na tela

    int divisao = a / b; 
     // calcula a divisão de a e b
    printf("a divisao de a / b é: %d\n", divisao); 
     // exibe o resultado da divisão na tela

    int resto = a % b; 
     // calcula o resto da divisão de a e b
    printf(" o resto da divisao de a %% b é: %d\n", resto); 
     // exibe o resultado do resto da divisão na tela


    return 0;
}