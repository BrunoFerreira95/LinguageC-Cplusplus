#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

//Fun��o principal
int main(){

    //Definindo uma string
    string palavra;

    //Imprimindo na tela
    cout << "Digite uma palavra:";

    //Lendo uma string
    cin >> palavra;

    //Imprimindo uma variavel
    cout << "\npalavra eh:" << palavra;

    //Pulando linha
    printf("\n");

    //pausa o programa ap�s executar
    system("pause");

    //Fechar programa
    return 0;
}
