#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string>
#include <iostream>

using namespace std;

//Função principal
int main(){

    //Definindo variaveis
    int a;
    float b;
    char c;
    bool d;

    //Atribuindo valores
    a = 2;
    b = 2.5;
    c = 'x';
    d = true;

    //Imprimindo na tela
    printf("Valor : %d\n", a);
    printf("Valor : %.2f\n", b);
    printf("Valor : %c\n", c);
    printf("Valor : %d\n", d);

    //Imprimindo com C++
    cout << "Valor : " << a << "\n";

    //Lendo variaveis
    //scanf("%d", &a);
    //scanf("%f", &b);
    //scanf("%c", &c);

    //Lendo com C++
    cin >> a;

    //Imprimindo com C++
    cout << "Valor : " << a << "\n";

    //pausa o programa após executar
    system("pause");

    //Fechar programa
    return 0;
}
