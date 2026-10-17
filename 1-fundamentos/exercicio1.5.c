#include <stdio.h>
 int main (void) {

    int a, b;
    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("A soma de (a) + (b) é: %d\n", a + b);
    

    printf("=====================================================\n");

    printf("Perfeito, agora vamos para subtração\n");

    printf("Digite o valor de (a) para subtração: ");
    scanf("%d", &a);

    printf("Digite o valor de (b) para a subtração: ");
    scanf("%d", &b);

    printf("A subtração de (a) - (b) é: %d\n", a - b);
 

    printf("=====================================================\n");
    printf("Perfeito, agora vamos para multiplicação\n");

    printf("Digite o valor de (a) para multiplicação: ");
    scanf("%d", &a);

    printf("Digite o valor de (b) para a multiplicação: ");
    scanf("%d", &b);

    printf("A multiplicação de (a) * (b) é: %d\n", a * b);


    printf("=====================================================\n");
    printf("Perfeito, agora vamos para a divisão\n");

    printf("Digite o valor de (a) para a divisão: ");
    scanf("%d", &a);

    printf("Digite o valor de (b) para a divisão: ");
    scanf("%d", &b);

    printf("A divisão de (a)/ (b) é: %d\n", a / b);
   

    printf("=====================================================\n");
    printf("Perfeito, agora vamos para o resto da divisão\n");
    printf("O resto da divisão de (a) %% (b) é: %d\n", a % b);
    
    return 0;

 }