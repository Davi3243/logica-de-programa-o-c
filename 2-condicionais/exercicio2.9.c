 #include <stdio.h>

 int main (void){
int a;

printf("Digite o valor: ");
scanf("%d", &a);

if (a > 0 ) {
printf("Seu numero é positivo\n");
} else if (a < 0) {
printf("Seu numero é negativo\n");
} else {
    printf("Valor igual a zero");
}

return 0;
 }