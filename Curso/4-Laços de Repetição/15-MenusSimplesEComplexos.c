#include <stdio.h>
#include <stdlib.h>

//Função principal
int main(){

    //Definindo variaveis
    int opcao;

    //Confere e valida a opcao
    while(opcao < 1 || opcao > 3){
        //Interface de Menu
        printf("Escolha uma opcao:");
        printf("\n1-Opcao 1");
        printf("\n2-Opcao 2");
        printf("\n3-Opcao 3\n");

        //Lendo opcao
        scanf("%d", &opcao);

        //Resultado de acordo com opcao escolhida
        switch(opcao){
            case 1:
                printf("\nOpcao 1 foi escolinha\n");
                break;
            case 2:
                printf("\nOpcao 2 foi escolinha\n");
                break;
            case 3:
                printf("\nOpcao 3 foi escolinha\n");
                break;
            default:
                printf("\nOpcao invalida\n");
                break;
        }
    }
    //pausa o programa após executar
    system("pause");

    //Fechar programa
    return 0;
}
