#include <stdio.h>
#include <stdlib.h>

//Fun��o para alocar um vetor dinamicamente
int* alocaVetor(int tamanho){
    //� cria um ponteiro auxiliar
    int *aux;

    //Aloca��o dinamica de memoria
    aux = (int*) malloc(tamanho * sizeof(int));

    //Retorna o ponteiro que aponta para a primeira posi��o de momoria do vetor alocado
    return aux;

}
//Fun��o principal
int main(){

    //Definindo Variaveis
    int *vetor, tamanho,i;

    //Lendo o tamanho do vetor pelo usuario
    printf("Digite um tamanho para o vetor:");
    scanf("%d", &tamanho);

    //Ponteiro recebe o endere�o de memoria que foi alocado para o vetor
    vetor = alocaVetor(tamanho);

    //Coloca valores no vetor
    for(i = 0; i < tamanho; i++){
        vetor[i] = 10;
    }

    //Imprime vetor
    for(i = 0; i < tamanho; i++){
        printf("%d\n", vetor[i]);
    }

    free( vetor);
    //pausa o programa ap�s executar
    system("pause");

    //Fechar programa
    return 0;
}
