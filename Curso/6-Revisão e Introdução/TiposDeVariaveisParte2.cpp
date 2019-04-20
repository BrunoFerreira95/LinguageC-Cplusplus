#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string>
#include <iostream>

#define TAM 3

using namespace std;

//Função principal
int main(){

    //Definindo vetor
    int vetor[TAM] = {5,10,15},i;

    //Imprimindo vetor utilizando for c e c++
    for(i = 0;i < TAM;i++){
        printf("%d\n", vetor[i]);
        //cout << vetor[i] << "\n";
    }

    //atribuindo valor ao vetor
    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;

    //Zerando incremento
    i = 0;

    //Imprimindo utilizando while
    while(i < TAM){
        printf("%d\n", vetor[i]);
        i++;
    }

    //Zerando incremento e adicionando
    i = 0;
    int j;

    //Definindo matriz
    int matriz[TAM][TAM] = {1,2,3,4,5,6,7,8,9};

    //Imprimindo matriz com for
    for(i = 0;i < TAM;i++){
        for(j = 0;j < TAM;j++){
        printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    //pausa o programa após executar
    system("pause");

    //Fechar programa
    return 0;
}
