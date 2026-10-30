/* 
Aula 3 — Laços de Repetição em C
Vamos estudar nesta ordem:
1. while
2. do while
3. for
4. Laços com if e else
5. Laços aninhados
6. Exercícios práticos para fixação.
1. Entendendo o que são laços
Imagine que você queira imprimir na tela os números de 1 até 10.

Sem laço, precisaria escrever dez printf().

Com um laço, podemos repetir a mesma instrução automaticamente.
2. Primeiro laço: while
O while significa "enquanto".

Ele executa um bloco de código enquanto determinada condição for verdadeira.
*************************************************************************************
#include <stdio.h>

int main(void) {

    int contador = 1;

    while (contador <= 10) {
        printf("%d\n", contador);
        contador++;
    }

    return 0;
}
*************************************************************************************
Vamos entender cada parte:
Código	Função
int contador = 1;	Começa em 1
while (contador <= 10)	Enquanto for menor ou igual a 10
printf()	Mostra o número
contador++	Incrementa 1

Visualizando a repetição
1. Contador = 1 → imprime 1
2. Contador = 2 → imprime 2
3. Contador = 3 → imprime 3
4. Continua até chegar a 10.
5. Contador = 11 → condição falsa, encerra.
*/