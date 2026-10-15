#include <stdio.h>
int main (void) {

     
    int a, b;
   
    printf("digite o primeiro valor inteiro: "); 
     // solicita ao usuário que digite o primeiro valor inteiro
    scanf("%d", &a); 
     // lê o valor do usuário e armazena na variável a

    printf("digite o segundo valor inteiro: ");
     // solicita ao usuário que digite o segundo valor inteiro
    scanf("%d", &b); 
     // lê o valor do usuário e armazena na variável b
   
    printf("a soma de a + b é: %d\n", a + b); 
     // calcula e exibe a soma de a e b

    return 0;
}
