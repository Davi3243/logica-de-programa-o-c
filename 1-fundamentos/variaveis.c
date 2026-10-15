#include <stdio.h>
// meu segundo programa em C
int main(void){
 
     int idade = 18; 
// declaração de uma variável inteira chamada idade e atribuição do valor 18.


     float altura = 1.80f;
  // declaração de uma variável float chamada altura e atribuição do valor 1.80.

  
     char inicial = 'D'; 
 // declaração de uma variável char chamada inicial e atribuição do valor 'D'.


    printf("idade: %d\n", idade);
// exibe o valor da variável idade na tela, usando o especificador de formato %d


    printf("altura: %.2f\n", altura);
// exibe o valor da variável altura na tela, usando o especificador de formato %.2f


    printf("inicial: %c\n", inicial);
// exibe o valor da variável inicial na tela, usando o especificador de formato %c

return 0;

}
/* temos três formatos diferentes:
- %d: exibe um número inteiro, como o valor de idade.
- %.2f: exibe um número decimal com duas casas depois da vírgula decimal 
(o programa normalmente usa ponto na saída).
- %c: exibe um caractere, como a inicial D.
O nome da variável colocado depois da vírgula indica qual valor será exibido no lugar do marcador.
O resultado esperado é:
Idade: 18 anos
Altura: 1.75 metros
Inicial: D  */