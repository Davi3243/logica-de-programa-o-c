#include  <stdio.h>

int main (void) {
  
    int contador = 1;

    while(contador <= 20) {
    printf("%d\n", contador);
    contador++;
printf("===\n");
     } if (contador == 20) {
    printf("seu contador já está no maximo\n");
  } else {
    printf("Contador chegou ao seu limite");
  }

 return 0;

}
