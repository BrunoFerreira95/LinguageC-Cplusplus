#include <stdio.h>
#include <stdlib.h>

//Declarando a função
void limpaTela();
//Função principal
int main(){

    //Definindo uma variavel
    int a;

    //Imprimindo alguma coisa
    printf("Digite uma valor para 'a':");

    //Lendo o valor
    scanf("%d", &a);

    //Chamando a função que limpa a tela
    limpaTela();

    //Imprimindo valor e fim de programa
    printf("O valor digitado foi %d \nFim do Programa!\n", a);

    //pausa o programa após executar
    system("pause");

    //Fechar programa
    return 0;
}

//Limpa a tela
void limpaTela(){
    system("cls");
}
void limpaTela();
