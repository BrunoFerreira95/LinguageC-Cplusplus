#include <stdio.h>
#include <stdlib.h>

//Função principal
int main(){

    //Definindo variaveis
    int a = 5;
    char b = 'x';

    //Codigo de exemplo com if
    if(a == 1){
        printf("\n Opcao escolhida: 1");
    }else if(a == 2){
        printf("\n Opcao escolhida: 2");
    }else if(a == 3){
        printf("\n Opcao escolhida: 3");
    }else{
        printf("\n Opcao invalida");
    }

    //O mesmo codigo de cima adaptado ao Switch
    switch(a){
        case 1:
            printf("\n Opcao escolhida: 1");
            break;
        case 2:
            printf("\n Opcao escolhida: 2");
            break;
        case 3:
            printf("\n Opcao escolhida: 3");
            break;
        default:
            printf("\n Opcao invalida");
            break;
    }

    //Switch com char
    switch(b){
        case 'x':
            printf("\n A letra eh x\n");
            break;
        default:
            printf("\n Opcao invalida\n");
            break;
    }
    //pausa o programa após executar
    system("pause");

    //Fechar programa
    return 0;
}
