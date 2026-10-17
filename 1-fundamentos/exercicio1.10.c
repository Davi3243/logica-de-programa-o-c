#include <stdio.h>

/*
Nosso exercício é converter segundos em horas, minutos e segundos restantes.
Por exemplo, imagine que você tenha 3.672 segundos.
- 1 hora tem 3.600 segundos.
- Depois de tirar 3.600, sobram 72 segundos.
- 72 segundos correspondem a 1 minuto e 12 segundos.
*/


int main (void) {
 int total_segundos;

 printf("Digite um quantidade de segundos: ");
 scanf("%d", &total_segundos);

 int horas;
    
 horas = total_segundos / 3600;

 int minutos;

 minutos = (total_segundos % 3600) / 60;

 int segundos;

 segundos = total_segundos % 60;

 printf("O tempo convertido é: %d horas, %d minutos e %d segundos\n", horas, minutos, segundos);



 return 0;
}