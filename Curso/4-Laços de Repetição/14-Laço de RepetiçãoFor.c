#include <stdio.h>
#include <stdlib.h>

//Fun��o principal
int main(){

    //Definindo variaveis
    int cont;

    //Tabuado do 5
    for(cont = 1; cont <= 10; cont++){
        printf("\n 5 X %d = %d",cont, 5 * cont);
    }

    //Contando de 2 em 2
    for(cont =1; cont<= 10; cont = cont + 2){
        printf("\n%d", cont);
    }

    //Contagem Regressiva
    for(cont = 10; cont > 0; cont--){
        printf("\n%d", cont);
    }
    //Pulando linha
    printf("\n");

    //pausa o programa ap�s executar
    system("pause");

    //Fechar programa
    return 0;
}
