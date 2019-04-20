#include <stdio.h>
#include <stdlib.h>

//Definindo que a função existe
int retornaDez();
float retornaQuebrado();

//Função principal
int main(){

    //Definindo um inteiro
    int a;

    //Passando o retorno de uma função para a variavel
    a = retornaDez();

    //Imprimindo valor de a
    printf("%d\n", a);

    //Definindo um float
    float b;

    //Passando o retorno de uma função para a variavel
    b = retornaQuebrado();

    //Imprimindo valor de b
    printf("%.2f\n", b);

    //pausa o programa após executar
    system("pause");

    //Fechar programa
    return 0;
}

//Função que retorna 10
int retornaDez(){
    return 10;
}

//Função que retorna 10
float retornaQuebrado(){
    return 5.5;
}
