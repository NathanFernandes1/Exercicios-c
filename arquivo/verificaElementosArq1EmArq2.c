/*Questão 02 [2,5 pontos]:
Dados dois arquivos textos arquivoA e arquivo,
contendo números inteiros, um por linha, implementar
uma função que determine se todos os elementos do
primeiro arquivo estão no segundo (retornando 0 ou 1,
dependendo do resultado).*/

#include<stdio.h>

int verificaIgualdadeValores(char nomeArq1[],char nomeArq2[]);
int lendoArquivo2(char nomeArq2[],int numero);

int main(){
	char nomeArquivoA[100]="arquivoA.txt";
	char nomeArquivoB[100]="arquivoB.txt";
	
	if (verificaIgualdadeValores(nomeArquivoA,nomeArquivoB)==0){
		printf("O arquivo 2 possui todos os valores do arquivo 1");
	}
	else{
		printf("O arquivo 2 NAO possui todos os valores do arquivo 1");
	}
}
int verificaIgualdadeValores(char nomeArq1[],char nomeArq2[]){
	FILE *arq1;
	int numero;
	
	arq1 = fopen (nomeArq1, "r");
	
	if (!arq1){
		return -1;	//representando que houve erro
	}
	else{
		
		while (fscanf (arq1, "%d", &numero) != EOF){
			
			if(lendoArquivo2(nomeArq2,numero)==1){
				fclose(arq1);
				return 1;
			}
		}
	}
	fclose(arq1);
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
