#include <stdio.h>
#include <stdlib.h>

//Função que imprime o vetor
int imprimeVetor(int *vetor, int tamanho){

    //Variavel Contadora
    int i;

    //Percorrendo o vetor
    for(i = 0;i < tamanho;i++){
        printf("%d\n", vetor[i]);
    }
}
//Modicando o valor do vetor com mais um
void modificaVetor(int *vetor, int tamanho){

    //Variavel Contadora
    int i;

    //Percorrendo o vetor
    for(i = 0;i < tamanho;i++){
        vetor[i] = vetor[i] + 1;
    }
}
//Função principal
int main(){

    //Definindo variaveis
    int v[3] = {1,2,3};

    //Mostrando vetor
    imprimeVetor(v,3);

    //Modifica o vetor
    modificaVetor(v,3);

    //Mostrando vetor
    imprimeVetor(v,3);
    //pausa o programa após executar
    system("pause");

    //Fechar programa
    return 0;
}
