#include <stdio.h>
#include <stdlib.h>

//Fun��o principal
int main(){

    //Variaveis
    char palavra[10];

    //Instru��o
    printf("Digite uma palavra:");

    //Limpa o Buffer
    setbuf(stdin, 0);

    //Le a string
    fgets(palavra, 255, stdin);

    //Limpar as casas n�o utilizadas
    palavra[strlen(palavra)-1] = '\0';

    //Imprime na tela
    printf("%s\n", palavra);

    //pausa o programa ap�s executar
    system("pause");

    //Fechar programa
    return 0;
}
