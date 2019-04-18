#include <stdio.h>
#include <stdlib.h>

//Função principal
int main(){

    //Variaveis
    char palavra[10];

    //Instrução
    printf("Digite uma palavra:");

    //Limpa o Buffer
    setbuf(stdin, 0);

    //Le a string
    fgets(palavra, 255, stdin);

    //Limpar as casas não utilizadas
    palavra[strlen(palavra)-1] = '\0';

    //Imprime na tela
    printf("%s\n", palavra);

    //pausa o programa após executar
    system("pause");

    //Fechar programa
    return 0;
}
