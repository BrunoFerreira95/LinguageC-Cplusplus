#include <stdio.h>
#include <stdlib.h>
#include <new>

//Função principal
int main(){

    //Definindo Variaveis
    int linhas, colunas, i, j;
    int **matriz;

    //Lendo linhas e colunas pelo usuario
    printf("Digite o numero de linhas:");
    scanf("%d", &linhas);
    printf("\nDigite o numero de colunas:");
    scanf("%d", &colunas);
    //Alocando as linhas
    matriz = (int **) new int[linhas];

    //Alocando memoria para as colunas de cada linha
    for(i = 0; i < linhas; i++){
        matriz[i] = (int *) new int[colunas];
    }

    //Preenchendo valores e exibindo a matriz
    for(i =0; i < linhas; i++){
        for(j =0; j < colunas; j++){
            matriz[i][j] = i;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    //Liberando memoria
    free( matriz );

    //pausa o programa após executar
    system("pause");

    //Fechar programa
    return 0;
}
