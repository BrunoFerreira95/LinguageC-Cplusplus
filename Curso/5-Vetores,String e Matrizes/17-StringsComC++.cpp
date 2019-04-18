#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

//Função principal
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

    //pausa o programa após executar
    system("pause");

    //Fechar programa
    return 0;
}
