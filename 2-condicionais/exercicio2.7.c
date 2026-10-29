#include <stdio.h>
  
int main (void) {

printf("==================================================\n");
printf("*********SISTEMA DE ACESSO************\n");

int idade;
int codigo;

printf("Digite sua idade: ");
scanf("%d", &idade);

printf("Digite o seu codigo de acesso: "); 
scanf("%d", &codigo);

printf("==================================================\n");

if ( idade >= 18 && codigo == 1234) {
printf("Acesso Permitido!");
} else {
    printf("Acesso Negado!\n");
}

return 0;
}