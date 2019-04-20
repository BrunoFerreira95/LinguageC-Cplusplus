#include <stdio.h>
#include <stdlib.h>

//Função que soma mais dez
int retornaComMaisDez(int numero){
    return numero + 10;
}

//Função que aumenta dez
void aumentaDez(int *numero){
    *numero = *numero + 10;
}

//Função principal
int main(){

    //Definindo variaveis
    int a = 5;

    //Mostrando o valor
    printf("%d\n", a);

    //Aumenta dez
    a = retornaComMaisDez(a);

    //Mostrando o valor
    printf("%d\n", a);

    //Função que aumenta 10 diretamente
    aumentaDez(&a);

    //Mostrando o valor
    printf("%d\n", a);

    //pausa o programa após executar
    system("pause");

    //Fechar programa
    return 0;
}
