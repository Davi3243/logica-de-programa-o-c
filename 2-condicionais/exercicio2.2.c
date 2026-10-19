#include <stdio.h>

int main(void) {

int a;

printf("Digite um valor: ");
scanf("%d", &a);
 if (a > 0) {
    printf("O valor é positivo");
 } else if(a < 0) {
 printf("O valor é negativo");
} else {
    printf("valor igual a zero");
}

return 0;
}