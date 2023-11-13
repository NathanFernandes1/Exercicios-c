/*Questão 02 [2,5 pontos]:
Implementar uma função que, dado um arquivo
texto contendo números inteiros, um por linha, e
dois valores inteiros A e B, crie outros três arquivos,
como descritos a seguir:
O primeiro deles conterá todos os valores do
arquivo original inferiores a A;
O segundo será formado pelos valores do arquivo
original pertencentes ao intervalo de A a B;
O último arquivo, por sua vez, conterá os
elementos maiores do que B.
Notas:
Todos os três novos arquivos não poderão conter
elementos repetidos;
Por ser uma questão que avalia o conceito sobre
Arquivos, não serão analisadas soluções que
transfiram os elementos do arquivo para outras
estruturas de dados como, por exemplo, vetores.*/

#include<stdio.h>

int	preencherArquivos(char nomeArq[],char nomeArq1[],char nomeArq2[],char nomeArq3[],int numA,int numB);
int lendoArquivoAux(char nomeArqAux[],int numero);
int main(){
	char nomeArquivo[100]="arquivo.txt";
	char nomeArquivo1[100]="arquivo1.txt";
	char nomeArquivo2[100]="arquivo2.txt";
	char nomeArquivo3[100]="arquivo3.txt";
	int numeroA,numeroB;
	
	printf("Digite um numero A:");
	scanf("%d",&numeroA);
	
	printf("\nDigite um numero B:");
	scanf("%d",&numeroB);
	
	preencherArquivos(nomeArquivo,nomeArquivo1,nomeArquivo2,nomeArquivo3,numeroA,numeroB);
}
int	preencherArquivos(char nomeArq[],char nomeArq1[],char nomeArq2[],char nomeArq3[],int numA, int numB){
	FILE *arq,*arq1,*arq2,*arq3,*arqAux;
	int numero,cont=0;
	char nomeArqAux[100]="arquivoAux.txt";
	
		arq = fopen (nomeArq, "r");
		arq1 = fopen (nomeArq1, "w");
		arq2 = fopen (nomeArq2, "w");
		arq3 = fopen (nomeArq3, "w");
		arqAux = fopen (nomeArqAux, "a");
		
		if (!arq||!arq1||!arq2||!arq3||!arqAux){
		return -1;	//representando que houve erro
	}
	else{
		while (fscanf (arq, "%d", &numero) != EOF)
		{
			
			if(numero<numA){
				
				if(cont==1){
					
					if (lendoArquivoAux(nomeArqAux,numero)==0){
					
							fprintf (arq1, "%d\n", numero);
					}
				}	
				else{
					fprintf (arq1, "%d\n", numero);
				}			
			}
			if(numero>=numA&&numero<=numB){
					if(cont==1){
					
					if (lendoArquivoAux(nomeArqAux,numero)==0){
					
							fprintf (arq2, "%d\n", numero);
					}
				}	
				else{
					fprintf (arq2, "%d\n", numero);
				}		
			}
			if(numero>numB){
					if(cont==1){
					
					if (lendoArquivoAux(nomeArqAux,numero)==0){
						
							fprintf (arq3, "%d\n", numero);
					}
				}	
				else{
					fprintf (arq3, "%d\n", numero);
				}		
			}
			
			if(cont==0){
				cont=1;
			}
			
				fprintf (arqAux, "%d\n", numero);
				
				rewind(arqAux);
			
			
		
		}
		
		//fechando os arquivos
		fclose (arq);
		fclose (arq1);
		fclose (arq2);
		fclose (arq3);
		fclose (arqAux);
		
		if (remove(nomeArqAux) != 0) {
        printf("Erro ao remover o arquivo");
    } 
	}
	return 0;
}

int lendoArquivoAux(char nomeArqAux[],int numero){
	FILE *arqAux;
	int num;
	
	arqAux = fopen (nomeArqAux, "r");
	
	if (!arqAux){
		return -1;	//representando que houve erro
	}
	else{
		while (fscanf (arqAux, "%d", &num) != EOF)
		{
			
			if(numero==num){
			fclose (arqAux);
			return 1;
			
		
		}
		
		
	
	}
		
}
fclose (arqAux);
		return 0;
}
