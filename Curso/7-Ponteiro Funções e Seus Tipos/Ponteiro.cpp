#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string>
#include <iostream>

#define TAM 3

using namespace std;

//Função principal
int main(){

    //Variavel
    int a = 20;

    //Imprimindo o valor de uma variavel
    printf("Valor de a: %d\n", a);

    //Imprimindo o endereço de uma variavel
    printf("Endereco de a: %d\n", &a);

    //VARIAVEIS ARMAZENAM VALORES
    int b = 10;

    //PONTEIROS ARMAZENAM POSIÇÕES DA MEMÓRIA
    int *ponteiro;

    //PONTEIRO RECEBENDO A POSIÇÃO NA MEMÓRIA DA VARIAVEL b
    ponteiro = &b;

    //Imprimindo o valor de uma variavel
    printf("Valor de b: %d\n", b);

    //* pode ser lido como "CONTEUDO APONTADO POR"
    *ponteiro = 40;

    //Imprimindo o valor de uma variavel
    printf("Valor de b: %d\n", b);

    //pausa o programa após executar
    system("pause");

    //Fechar programa
    return 0;
}
