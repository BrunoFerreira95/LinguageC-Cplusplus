#include <stdio.h>
#include <stdlib.h>

//Definindo que a fun��o existe
int retornaDez();
float retornaQuebrado();

//Fun��o principal
int main(){

    //Definindo um inteiro
    int a;

    //Passando o retorno de uma fun��o para a variavel
    a = retornaDez();

    //Imprimindo valor de a
    printf("%d\n", a);

    //Definindo um float
    float b;

    //Passando o retorno de uma fun��o para a variavel
    b = retornaQuebrado();

    //Imprimindo valor de b
    printf("%.2f\n", b);

    //pausa o programa ap�s executar
    system("pause");

    //Fechar programa
    return 0;
}

//Fun��o que retorna 10
int retornaDez(){
    return 10;
}

//Fun��o que retorna 10
float retornaQuebrado(){
    return 5.5;
}
