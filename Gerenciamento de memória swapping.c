#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Prototipo das funções
int* alocaVetor(int tamanho);
void memoriazerar(int tamanho, int* v);
void alocarmemoriaprincipal(int tamanho, int*v);
int swap(int tamanho, int* v, int* v1);
void listar(int tamanho, int* v, char* frase);

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

                //Sair do programa
                exit(0);

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

//Função de alucao dinamica para o tamanho do vetor
int* alocaVetor(int tamanho){
    //É cria um ponteiro auxiliar
    int *aux;

    //Alocação dinamica de memoria
    aux = (int*) malloc(tamanho * sizeof(int));

    //Retorna o ponteiro que aponta para a primeira posição de momoria do vetor alocado
    return aux;

}

//Função para zerar o vetor
void menzerar(int tamanho, int* vetor)
{
	int i;
	for(i = 0; i < tamanho; i++)
		vetor[i] = 0;
}

//Função para alucar na memoria principal
int alocarmenprinc(int tamanho, int* vetor)
{
	int i, x, validacao = 0;
	printf("Codigo para alocar:");
	scanf("%d", &x);
	for(i=0;i<tamanho;i++)
		if(vetor[i]==0)
		{
			vetor[i]=x;
			validacao = 1;
			break;
		}
    return validacao;
}

//Função para fazer swap out ou in
int swap(int tamanho, int* vetor, int* vetorsegundario)
{
	int i, j, k, x, aux, validacao = 0;
	printf("Codigo do processo:");
	scanf("%d",&x);
	for(i=0;i<tamanho;i++)
	    if(vetor[i]==x)
	    {
	        aux = vetor[i];
	        for(j = 0; j < tamanho; j++)
        	    if(vetorsegundario[j] == 0)
        	    {
        	        vetorsegundario[j] = aux;
        	        vetor[i] = 0;
        	        validacao = 1;
        	        break;
        	    }
	        break;
	    }
    return validacao;
}

//Função para lista a memoria
void listar(int tamanho, int* vetor, char* frase)
{
	int i;
	for(i = 0; i < tamanho; i++)
	{
		printf("%s [%d] = %d\n",frase, i, vetor[i]);
	}
}
