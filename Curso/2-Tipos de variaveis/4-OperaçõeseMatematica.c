#include <stdio.h>
//Função principal do programa
int main()
{
    //Definindo variaveis
    int a = 6, b = 4;

    //Soma
    printf("\nA soma de %d e %d = %d",a , b, a + b);

    //Subtracao
    printf("\nA subtracao de %d e %d = %d",a , b, a - b);

    //Divisao
    printf("\nA divisao de %d e %d = %d",a , b, a / b);

    //Multiplicacao
    printf("\nA multiplicacao de %d e %d = %d",a , b, a * b);

    //Resto da divisao
    printf("\nA resto da divisao de %d e %d = %d",a , b, a % b);

    //Valor absoluto
    printf("\nO valor absoluto de -3 = %d",abs(-3));

    //Fecha o programa
    return 0;
}

