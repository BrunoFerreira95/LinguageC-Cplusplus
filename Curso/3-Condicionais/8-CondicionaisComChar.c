#include <stdio.h>

//Funcao principao do programa
int main()
{
    //Difinindo variaveis
    char letra = 'x';

    //Condicional Simples
    if(letra == 'x'){
        printf("\nA letra eh x.");
    }

    //Exibindo letra
    printf("\nCodigo da letra = %d", letra);

    //Condicional simples com tabela ascii
    if(letra == 120){
        printf("\nA letra eh x.");
    }

    //fecha o programa
    return 0;
}

