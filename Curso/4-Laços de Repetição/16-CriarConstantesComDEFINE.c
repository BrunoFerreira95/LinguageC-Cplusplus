#include <stdio.h>
#include <stdlib.h>
#define TAM 10

//Fun��o principal
int main(){

    //imprime na tela
    printf("%d\n", TAM);

    //Definindo variavel
    int i;

    //Contagem ate 10
    for(i = 1;i <= TAM;i++){
        printf("\n%d", i);
    }

    //Pulando linha
    printf("\n");

    //pausa o programa ap�s executar
    system("pause");

    //Fechar programa
    return 0;
}
