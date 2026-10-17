#include <stdio.h>
/*
Sua missão:
1. Declarar uma variável para o preço inteiro do produto.
2. Declarar uma variável para a quantidade comprada.
3. Solicitar os dois valores usando scanf().
4. Calcular o total usando *.
5. Mostrar o resultado com printf().
*/


int main (void) {

    printf("=====================================================\n");
int produto;
int quantidade;

printf("Digite o valor do produto: ");
scanf("%d", &produto);

printf("Quantos itens você deseja comprar? ");
scanf("%d", &quantidade);

printf("O valor total da compra é: %d\n", produto * quantidade);

    printf("=====================================================\n");

return 0;
   

}