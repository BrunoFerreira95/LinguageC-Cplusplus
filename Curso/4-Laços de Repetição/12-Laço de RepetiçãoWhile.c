#include <stdio.h>
#include <stdlib.h>

//Função principal
int main(){

    //Defenindo variaveis
    int a = 1, b = 10;

    //Contando até 10
    while(a <= 10){

        //Imprimindo 'a' na tela
        printf("\n%d", a);

        //Imcremento
        a++; //a = a + 1;

    }

    //Contando Regressiva
    while(b >= 1){

        //Imprimindo 'a' na tela
        printf("\n%d", b);

        //Imcremento
        b--; //b = b - 1;

    }
    //Pulando linha
    printf("\n");

    //pausa o programa após executar
    system("pause");

    //Fechar programa
    return 0;
}
