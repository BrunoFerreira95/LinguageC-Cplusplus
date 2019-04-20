#include <stdio.h>
#include <stdlib.h>

void mostraSucessor(int numero){
    printf("\nO sucessor de %d eh %d", numero, numero +1);
}

int retornaAntecessor(int numero){
    return numero - 1;
}
//Função principal
int main(){

    //Definindo variaveis
    int a;

    //Imprimindo na tela
    printf("Digite o valor:");

    //Lendo o valor de a
    scanf("%d", &a);

    //Chamando a função
    mostraSucessor(a);

    //Imprimindo o numero e o sucessor
    printf("\nO Antecessor de %d eh %d\n", a, retornaAntecessor(a));

    //pausa o programa após executar
    system("pause");

    //Fechar programa
    return 0;
}
