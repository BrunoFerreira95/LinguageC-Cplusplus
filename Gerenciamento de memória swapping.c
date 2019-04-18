#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void menzerar(int n, int* v);
void alocarmenprinc(int n, int*v);
int swap(int n, int* v, int* v1);
void listar(int n, int* v, char* frase);
int main()
{
	int n,swapteste;
	int continuar=1;
	printf("Digite o tamanho da memoria:");
	scanf("%d", &n);
	int v[n],v1[n];
    menzerar(n,v);
    menzerar(n,v1);
    char menprin[]="Memoria Principal";
    char mensegun[]="Memoria Segundaria";
	do
    {
        printf("----------------------------------------------\n");
        printf("\n\tGerenciamento de memoria swapping\n\n");
        printf("\tTamanho de Memoria: %d\n", n);
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

        scanf("%d", &continuar);
        system("clear");

        switch(continuar)
        {
            case 1:
                menzerar(n,v);
                break;
            case 2:
                menzerar(n,v1);
                break;
            case 3:
                alocarmenprinc(n,v);
                break;
            case 4:
                swapteste = swap(n,v,v1);
                if(swapteste==0)
                    printf("\n%s esta cheia.\n",mensegun);
                break;
            case 5:
                swapteste = swap(n,v1,v);
                if(swapteste==0)
                    printf("\n%s esta cheia.\n",menprin);
                break;
            case 6:
                listar(n,v,menprin);
                break;
            case 7:
                listar(n,v1,mensegun);
                break;
            case 8:
                exit(0);
                break;

            default:
                printf("Digite uma opcao valida\n");
        }
    } while(continuar);
}
void menzerar(int n, int* v)
{
	int i;
	for(i=0;i<n;i++)
		v[i]=0;
}
void alocarmenprinc(int n, int* v)
{
	int i,x;
	printf("Codigo para alocar:");
	scanf("%d", &x);
	for(i=0;i<n;i++)
		if(v[i]==0)
		{
			v[i]=x;
			break;
		}
}
int swap(int n, int* v, int* v1)
{
	int i,j,k,x,aux,result=0;
	printf("Codigo do processo:");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	    if(v[i]==x)
	    {
	        aux=v[i];
	        for(j=0;j<n;j++)
        	    if(v1[j]==0)
        	    {
        	        v1[j]=aux;
        	        v[i]=0;
        	        result=1;
        	        break;
        	    }
	        break;
	    }
    return result;
}
void listar(int n, int* v, char* frase)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%s [%d] = %d\n",frase,i,v[i]);
	}
}
