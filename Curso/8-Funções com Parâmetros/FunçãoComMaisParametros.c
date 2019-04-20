#include <stdio.h>
#include <stdlib.h>

void mostraSoma(int primeiroValor, int segundoValor){
    printf("\nA soma entre %d e %d eh %d\n",primeiroValor,segundoValor,primeiroValor + segundoValor);
}

int retornaSoma(int primeiroValor, int segundoValor){
    return primeiroValor + segundoValor;
}
//Função principal
int main(){

    //Definindo variaveis
    int a = 5, b = 7;

    //Função que mostra a soma
    mostraSoma(a,b);

    //Exibi o resultado da soma retornado pela fução
    printf("\nA soma entre %d e %d eh %d\n",a , b, retornaSoma(a,b));

    //pausa o programa após executar
    system("pause");

    //Fechar programa
    return 0;
}
