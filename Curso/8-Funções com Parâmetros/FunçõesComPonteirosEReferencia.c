#include <stdio.h>
#include <stdlib.h>

//Fun��o que soma mais dez
int retornaComMaisDez(int numero){
    return numero + 10;
}

//Fun��o que aumenta dez
void aumentaDez(int *numero){
    *numero = *numero + 10;
}

//Fun��o principal
int main(){

    //Definindo variaveis
    int a = 5;

    //Mostrando o valor
    printf("%d\n", a);

    //Aumenta dez
    a = retornaComMaisDez(a);

    //Mostrando o valor
    printf("%d\n", a);

    //Fun��o que aumenta 10 diretamente
    aumentaDez(&a);

    //Mostrando o valor
    printf("%d\n", a);

    //pausa o programa ap�s executar
    system("pause");

    //Fechar programa
    return 0;
}
