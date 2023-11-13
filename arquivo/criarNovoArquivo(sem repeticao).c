/*Questão 04 [2,5 pontos]:
Implementar uma função que, dado um arquivo texto A
contendo números inteiros, crie um novo arquivo, B,
com os mesmos valores que estão em A, porém sem
repetição de elementos.
Nota: por ser uma questão que avalia a manipulação
de arquivos, nenhuma outra estrutura (como vetores)
pode ser utilizada.*/

#include<stdio.h>

int arquivoSemRepeticao(char nomeArqA[],char nomeArqB[]);
int lendoArquivoAux(char nomeArqAux[],int numero);

int main(){
	char nomeArquivoA[100]="arquivoA.txt";
	char nomeArquivoB[100]="arquivoB.txt";
	
	arquivoSemRepeticao(nomeArquivoA,nomeArquivoB);
}

int arquivoSemRepeticao(char nomeArqA[],char nomeArqB[]){
	FILE *arqA,*arqB,*arqAux;
	char nomeArqAux[100]="arquivoAux.txt";
	int numero,cont=0;
	
	arqA = fopen (nomeArqA, "r");
	arqB = fopen (nomeArqB, "w");
	arqAux = fopen (nomeArqAux,"a");
	
	if (!arqA||!arqB||!arqAux){
		return -1;	//representando que houve erro
	}
	else
	
		while (fscanf (arqA, "%d", &numero) != EOF){
			
				if(cont==1){
					
					if (lendoArquivoAux(nomeArqAux,numero)==0){
					
							fprintf (arqB, "%d\n", numero);
					}
				}	
				else{
					fprintf (arqB, "%d\n", numero);
				}
				
				if(cont==0){
				cont=1;
			}
			
				fprintf (arqAux, "%d\n", numero);
				
				rewind(arqAux);
			
		}
		
		fclose (arqA);
		fclose (arqB);
		fclose (arqAux);
		
		if (remove(nomeArqAux) != 0) {
       printf("Erro ao remover o arquivo");
    } 
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
