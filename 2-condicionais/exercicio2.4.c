#include <stdio.h>
 
int main (void){

float media, nota1, nota2;
 printf("digite a primeira nota: ");
  scanf("%f", &nota1);
 printf("digite a segunda nota: ");
scanf("%f", &nota2);
  
media = (nota1 + nota2) / 2;

if (media >= 7) {
    printf("parabens voce foi aprovado");
} else if (media >= 5) {
 printf("ops, voce esta de recuperação"); 
} else {
    printf("voce esta reprovado\n");

}
}