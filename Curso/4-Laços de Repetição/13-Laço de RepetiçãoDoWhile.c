#include <stdio.h>
#include <stdlib.h>

//Fun��o principal
int main(){

    //Defenindo variaveis
    int a = 1, b = 10;

    //Primeiro confere a condi��om depois repete o bloco
    while(a <= 10){

        //Imprimindo 'a' na tela
        printf("\n%d", a);

        //Imcremento
        a++; //a = a + 1;

    }

    a=1;

    //Primeiro executa uma vez, depois confere a condi��o
    do{

        //Imprimindo 'a' na tela
        printf("\n%d", a);

        //Imcremento
        a++; //a = a + 1;

    }while(a <= 10);

    //Pulando linha
    printf("\n");

    //pausa o programa ap�s executar
    system("pause");

    //Fechar programa
    return 0;
}
