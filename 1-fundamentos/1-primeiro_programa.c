#include <stdio.h>  

/* #include: é uma diretiva que manda o pré-processador 
incluir o conteúdo de um arquivo de cabeçalho. */

/* stdio.h: é o cabeçalho da biblioteca padrão de entrada e saída (standard input/output).
Ele disponibiliza declarações de funções como printf(), que usamos para mostrar mensagens na tela */

int main(void){

/* int: indica que a função retorna um número inteiro ao sistema operacional.
main: é o nome da função principal, onde começa a execução do programa.
void: indica que a função não recebe parâmetros. */

printf("olà, mundo!\n");

/* printf: função que exibe texto e valores formatados.
( e ): delimitam os argumentos passados à função.
"Ola, mundo!\n": é o texto que queremos exibir.
\n: representa uma quebra de linha.
;: indica o final da instrução em C. */

return 0;
}

/* return 0;
Essa linha encerra a função main retornando o valor 0.
Tradicionalmente, isso indica ao sistema operacional que o programa terminou com sucesso.*/

//                       *********E como o GCC entra nisso?***********
/* Quando você digitou o comando de compilação, o GCC transformou o código-fonte 
em um executável que o Windows consegue executar.

- Código-fonte: primeiro_programa.c
- Compilador: gcc
- Executável gerado: primeiro_programa.exe
Assim, quando você executou .\primeiro_programa.exe, o Windows iniciou o programa compilado.*/