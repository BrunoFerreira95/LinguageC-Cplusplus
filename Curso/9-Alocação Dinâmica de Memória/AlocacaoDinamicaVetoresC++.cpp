#include <stdio.h>
#include <stdlib.h>a
#include <new>

//Função principal
int main(){

    //Definindo Variaveis
    int tamanho, i;

    //Lendo tamanho
    printf("Digite um tamanho:");
    scanf("%d", &tamanho);

    //Criando um ponteiro que recebe um vetor vazio
    int *vetor = new int(tamanho);

    //Coloca valores no vetor
    for(i = 0; i < tamanho; i++){
        vetor[i] = 10;
    }

    //Imprime vetor
    for(i = 0; i < tamanho; i++){
        printf("%d\n", vetor[i]);
    }

    free( vetor);
    //pausa o programa após executar
    system("pause");

    //Fechar programa
    return 0;
}
