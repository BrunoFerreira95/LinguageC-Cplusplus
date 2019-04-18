#include <stdio.h>
#include <stdbool.h>
//Função principal do programa
int main()
{
    //definindo variaveis
    int a;
    float b;
    char c;
    bool d;

    //passando valores
    a = 5;
    b = 2.3;
    c = 'a';
    d = true; //true = 1, false = 0

    //imprimindo na tela
    printf("\n O valor de a = %d", a);
    printf("\n O valor de b = %f", b);
    printf("\n O valor de c = %c", c);
    printf("\n O valor de d = %d\n", d);

    //lendo variaveis
    scanf("%d", &a);
    printf("\n");
    scanf("%f", &b);
    printf("\n");
    scanf(" %c", &c);
    printf("\n");
    scanf(" %d", &d);

    //imprimindo na tela
    printf("\n O valor de a = %d", a);
    printf("\n O valor de b = %f", b);
    printf("\n O valor de c = %c", c);
    printf("\n O valor de d = %d\n", d);

    //Fecha o programa
    return 0;

}

