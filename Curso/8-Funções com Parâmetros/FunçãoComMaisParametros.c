#include <stdio.h>
#include <stdlib.h>

void mostraSoma(int primeiroValor, int segundoValor){
    printf("\nA soma entre %d e %d eh %d\n",primeiroValor,segundoValor,primeiroValor + segundoValor);
}

int retornaSoma(int primeiroValor, int segundoValor){
    return primeiroValor + segundoValor;
}
//Fun��o principal
int main(){

    //Definindo variaveis
    int a = 5, b = 7;

    //Fun��o que mostra a soma
    mostraSoma(a,b);

    //Exibi o resultado da soma retornado pela fu��o
    printf("\nA soma entre %d e %d eh %d\n",a , b, retornaSoma(a,b));

    //pausa o programa ap�s executar
    system("pause");

    //Fechar programa
    return 0;
}
