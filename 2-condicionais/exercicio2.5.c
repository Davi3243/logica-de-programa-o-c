#include <stdio.h> 

int main(void){

int idade;

printf("===================================\n");

printf("Por favor, selecione sua idade: ");
scanf("%d", &idade);

if (idade >= 18 && idade <=30) {
    printf("idade dentro da faixa\n");
} else {
printf("idade fora da faixa\n");
}
printf("====================================\n");

return 0;

}   