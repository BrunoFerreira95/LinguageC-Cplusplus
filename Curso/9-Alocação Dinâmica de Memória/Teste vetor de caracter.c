#include <stdio.h>
#include <stdlib.h>

//Função principal
int main(){

    //Definindo Variaveis
    int linhas, colunas, i, j;
    int **vetor;

    //Lendo linhas e colunas pelo usuario
    printf("Digite o numero de linhas:");
    scanf("%d", &linhas);

    //Alocando as linhas
    vetor = (int **) malloc(linhas * sizeof(int *));

    //Alocando memoria para as colunas de cada linha
    for(i = 0; i < linhas; i++){
        vetor[i] = (char *) malloc(20 * sizeof(char));
    }

    for(i = 0; i < linhas; i++){
        vetor[i] = "Teste";
    }

    //Preenchendo valores e exibindo a vetor
    for(i =0; i < linhas; i++){
        printf("%s ", vetor[i]);
        printf("\n");
    }

    //Liberando memoria
    free( vetor );

    //pausa o programa após executar
    system("pause");

    //Fechar programa
    return 0;
}
