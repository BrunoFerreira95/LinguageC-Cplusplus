#include <stdio.h>
#include <stdlib.h>

//Declarando que a função existe
char retornaLetra();

//Função principal
int main(){

    //Definindo variavel tipo char
    char letra;

    //Char passando o retorno da função para variavel
    letra = retornaLetra();

    //Imprimindo variavel
    printf("%c\n", letra);

    //pausa o programa após executar
    system("pause");

    //Fechar programa
    return 0;
}

//Função que retorna x
char retornaLetra(){
    return 'x';
}
