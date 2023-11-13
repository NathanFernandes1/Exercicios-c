/*Questão 02 [2,5 pontos]:
Desenvolver uma função que, dados dois arquivos
textos – arqA e arqB – contendo números inteiros, crie
um terceiro arquivo contendo todos os valores de arqA
que não estão em arqB.*/

#include<stdio.h>

int verificaIgualdadeValores(char nomeArq1[],char nomeArq2[],char nomeArq3[]);
int lendoArquivo2(char nomeArq2[],int numero);

int main(){
	char nomeArquivoA[100]="arquivoA.txt";
	char nomeArquivoB[100]="arquivoB.txt";
	char nomeArquivoC[100]="arquivoC.txt";
	
	if (verificaIgualdadeValores(nomeArquivoA,nomeArquivoB,nomeArquivoC)==-1){
		printf("Erro na abertura de arquivo");
	}
	
}
int verificaIgualdadeValores(char nomeArq1[],char nomeArq2[],char nomeArq3[]){
	FILE *arq1,*arq3;
	int numero;
	
	arq1 = fopen (nomeArq1, "r");
	arq3 = fopen (nomeArq3, "w");
	
	if (!arq1||!arq3){
		return -1;	//representando que houve erro
	}
	else{
		
		while (fscanf (arq1, "%d", &numero) != EOF){
			
			if(lendoArquivo2(nomeArq2,numero)==1){
				fprintf (arq3, "%d\n", numero);
			}
		}
	}
	fclose(arq1);
	fclose(arq3);
	return 0;
}

int lendoArquivo2(char nomeArq2[],int numero){
	FILE *arq2;
	int num;
	
	arq2 = fopen (nomeArq2, "r");
	
	if (!arq2){
		return -1;	//representando que houve erro
	}
	else{
		
		while (fscanf (arq2, "%d", &num) != EOF){
			
			if(num==numero){
				fclose(arq2);
				return 0;
			}
		}
		fclose(arq2);
		return 1;
	}
}
