#include <stdio.h>
#include <stdlib.h>
#define TAM 3

//Função principal
int main(){

    //Definindo variavel
    int vetor[TAM],i;

    //Passando valores
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    //Adicionando 1 para cada posicao
    for(i = 0;i < TAM;i++){
        vetor[i] = vetor[i] + 1;
    }
    //Exibindo os valores
    printf("\nPosicao 0 = %d", vetor[0]);
    printf("\nPosicao 1 = %d", vetor[1]);
    printf("\nPosicao 2 = %d\n", vetor[2]);

    //Imprimindo vator com laço de repetição
    for(i = 0;i < TAM;i++){
        scanf("%d", &vetor[i]);
    }

    //Imprimindo vator com laço de repetição
    for(i = 0;i < TAM;i++){
        printf("\nPosicao %d = %d",i, vetor[i]);
    }
    //Pulando linha
    printf("\n");

    //pausa o programa após executar
    system("pause");

    //Fechar programa
    return 0;
}
