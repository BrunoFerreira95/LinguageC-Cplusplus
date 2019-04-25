#include <stdio.h>
#include <stdlib.h>
#include "prototypes.h"
#include "functions.c"

int main()
{
    //Definindo variaveis
	int tamanho,validacao,continuar = 1, *vetorprincipal, *vetorsegundario;

	//Lendo o tamanho da memoria
	printf("Digite o tamanho da memoria:");
	scanf("%d", &tamanho);

	//Alocando Dinamicamente o espaco das memorias
	vetorprincipal = alocaVetor(tamanho);
	vetorsegundario = alocaVetor(tamanho);

	//Zerando a memoria
    menzerar(tamanho,vetorprincipal);
    menzerar(tamanho,vetorsegundario);

    //Declarando mensagem de memoria
    char memoriaprincipal[]="Memoria Principal";
    char memoriasegundaria[]="Memoria Segundaria";

    //Inicio do menu com laço
	do
    {
        //Painel do menu
        printf("----------------------------------------------\n");
        printf("\n\tGerenciamento de memoria swapping\n\n");
        printf("\tTamanho de Memoria: %d\n", tamanho);
        printf("----------------------------------------------\n");
        printf("1.	Limpar a memoria principal\n");
        printf("2.	Limpar a memoria secundoria\n");
        printf("3.	Alocar um processo na memoria principal\n");
        printf("4.	Swap-Out\n");
        printf("5.	Swap-In\n");
        printf("6.	Listar a memoria principal\n");
        printf("7.	Listar a memoria secundoria\n");
        printf("----------------------------------------------\n");
        printf("8.  Sair\n");

        //Leitura da opcao do menu
        scanf("%d", &continuar);

        //Limpar tela
        system("cls");

        //Condicional para selecionar
        switch(continuar)
        {
            case 1:

                //Chama a fução para zerar a memoria principal
                menzerar(tamanho,vetorprincipal);

                break;
            case 2:

                //Chama a função para zerar a memoria segundaria
                menzerar(tamanho,vetorsegundario);

                break;
            case 3:

                //Função que aloca em um endereço da memoria principal
                validacao = alocarmenprinc(tamanho,vetorprincipal);

                //Confere se a espaço na memoria
                if(validacao==0)
                    printf("\n%s esta cheia.\n",memoriaprincipal);

                break;
            case 4:

                //Realiza o swap out
                validacao = swap(tamanho,vetorprincipal,vetorsegundario);

                //Confere se a espaço na memoria
                if(validacao==0)
                    printf("\n%s esta cheia.\n",memoriasegundaria);

                break;
            case 5:

                //Realiza o swap in
                validacao = swap(tamanho,vetorsegundario,vetorprincipal);

                //Confere se a espaço na memoria
                if(validacao==0)
                    printf("\n%s esta cheia.\n",memoriaprincipal);

                break;
            case 6:

                //Lista a memoria principal
                listar(tamanho,vetorprincipal,memoriaprincipal);

                break;
            case 7:

                //Lista a memoria segundaria
                listar(tamanho,vetorsegundario,memoriasegundaria);

                break;
            case 8:
                //Liberando memoria
                free( vetorprincipal );
                free( vetorsegundario );

                //Sair do programa
                exit(1);

                break;

            default:

                //Mensagem casa tenho um opcao do menu invalida
                printf("Digite uma opcao valida\n");
        }

    //Continua a laço
    } while(continuar);

    //Retorna zero a função principal
    return 0;
}
