/*

Entrada de dados com scanf
Até agora, nós colocávamos os valores diretamente no código:
int idade = 23;


Se quiséssemos usar outra idade, precisaríamos alterar o código e compilar novamente.
Com scanf, o próprio usuário pode digitar a idade no terminal enquanto o programa está rodando!
1. Conhecendo o scanf
Veja esta instrução:
scanf("%d", &idade);


Vamos entender cada parte.
scanf
É a função usada para ler dados formatados digitados pelo usuário.

"%d"
Indica que queremos ler um número inteiro, compatível com uma variável do tipo int.


&idade
O símbolo & fornece o endereço de memória da variável idade. Assim, o scanf sabe onde armazenar o número digitado.


;
Finaliza a instrução.

Guarde esta diferença:
- printf → mostra informações na tela.
- scanf → lê informações digitadas pelo usuário.
2. Nosso exemplo explicado
Imagine que queremos perguntar a idade de uma pessoa.

#include <stdio.h>

int main(void) {

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Sua idade e: %d\n", idade);

    return 0;
}



Vamos entender a sequência:
1. int idade; declara uma variável inteira, inicialmente sem um valor definido pelo nosso código.
2. printf mostra a pergunta no terminal.
3. scanf espera que o usuário digite um número inteiro e pressione Enter.
4. &idade indica onde o valor digitado deve ser armazenado.
5. O último printf mostra o valor que ficou guardado na variável.
Exemplo de execução
Digite sua idade: 23
Sua idade e: 23


O número 23 foi digitado durante a execução, e não estava definido previamente no código.
*/