#include <stdio.h>
#include <stdlib.h>

//Declarando que a fun��o existe
char retornaLetra();

//Fun��o principal
int main(){

    //Definindo variavel tipo char
    char letra;

    //Char passando o retorno da fun��o para variavel
    letra = retornaLetra();

    //Imprimindo variavel
    printf("%c\n", letra);

    //pausa o programa ap�s executar
    system("pause");

    //Fechar programa
    return 0;
}

//Fun��o que retorna x
char retornaLetra(){
    return 'x';
}
