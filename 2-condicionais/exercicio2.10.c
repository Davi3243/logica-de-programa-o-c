#include <stdio.h> 
int main (void){

    int numero1, numero2;
    int opcao;
    int resultado;

    printf("Digite o primeiro valor: ");
    scanf("%d", &numero1);
    printf("Digite o segundo valor: ");
    scanf("%d", &numero2);

    printf("Escolha uma opcao 1, 2, 3 ou 4: ");
    scanf("%d", &opcao);
  if ( opcao == 1){
    resultado = (numero1 + numero2);
    printf("opcao 1 é = %d\n", resultado);
  }
  else if ( opcao == 2) {
    resultado = (numero1 - numero2);
    printf("opcao 2 é = %d\n", resultado);
  }
  else if ( opcao == 3) {
    resultado = (numero1 * numero2);
    printf("opcao 3 é = %d\n", resultado);
  }
 else if ( opcao == 4) {
      if (numero2 == 0) {
         printf("Não é possivel dividir por zero");
      } else {
    resultado = (numero1 / numero2);
    printf("opcao 4 é = %d\n", resultado);
  }
  } else {
    printf("Opcao invalida");
  }
   return 0;
}