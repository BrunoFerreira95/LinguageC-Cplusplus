#include <stdio.h>
#include <stdlib.h>

//Função para alocar um vetor dinamicamente
int* alocaVetor(int tamanho){
    //É cria um ponteiro auxiliar
    int *aux;

    //Alocação dinamica de memoria
    aux = (int*) malloc(tamanho * sizeof(int));

    //Retorna o ponteiro que aponta para a primeira posição de momoria do vetor alocado
    return aux;

}
//Função principal
int main(){

    //Definindo Variaveis
    int *vetor, tamanho,i;

    //Lendo o tamanho do vetor pelo usuario
    printf("Digite um tamanho para o vetor:");
    scanf("%d", &tamanho);

    //Ponteiro recebe o endereço de memoria que foi alocado para o vetor
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
    //pausa o programa após executar
    system("pause");

    //Fechar programa
    return 0;
}
