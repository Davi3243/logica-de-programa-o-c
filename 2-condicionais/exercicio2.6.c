#include <stdio.h>
int main (void) {

    printf("=====================================================================================\n");

    int idade;
    
    printf("\t\tDESCONTO PARA CLIENTES D 18 E ACIMA 60 ANOS\n");

    printf("Digite sua idade aqui!!: ");
    scanf("%d", &idade); 
    
    if(idade <= 18 || idade >= 60) {
        printf("Parabens!! Desconto concedido com sucesso\n");
    } else {
        printf("Desconto não concedido\n");
    }

    printf("=======================================================================================\n");

return 0;

}