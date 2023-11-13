/*Questão 02 [2,5 pontos]:
Considere a existência de um arquivo contendo números inteiros, um por linha. Desenvolver uma função que, dados
este arquivo e duas linhas L1 e L2, inverta no arquivo todos os números compreendidos entre estas linhas, como
ilustrado no exemplo a seguir (a 1a linha do arquivo é a linha 1):*/

#include<stdio.h>

int inverter(int l1,int l2,char nomeArq[]);
int main(){
	int linha1, linha2;
	char nomeArquivo[100]="arquivo.txt";
	
	
	printf("Digite a linha 1:");
	scanf("%d",&linha1);
	
	printf("\nDigite a linha 2:");
	scanf("%d",&linha2);
	
	inverter(linha1,linha2,nomeArquivo);
}

int inverter(int l1,int l2,char nomeArq[]){
	FILE *arq,*arqAux;
	char nomeArqAux[100]="arquivoAux.txt";
		
	int cont=0,cont2=l2,cont3=1,numero;
	
	arq = fopen (nomeArq, "r");
	arqAux = fopen (nomeArqAux, "a");
	
		if (!arq||!arqAux){
		return -1;	//representando que houve erro
	}
	else{
		while (fscanf (arq, "%d", &numero) != EOF){
			cont++;
			
			if(cont==cont2&&cont>=l1){
				cont=0;
				cont2--;
				
				fprintf (arqAux, "%d\n", numero);
				rewind(arq);
			}
			else if(cont3<l1||cont>l2) {
				fprintf (arqAux, "%d\n", numero);
				cont3++;
			}
		}
		
		fclose(arq);
		fclose(arqAux);
	
		if (remove(nomeArq) != 0) {
        printf("Erro ao remover o arquivo");
    } 
		if (rename(nomeArqAux,nomeArq) != 0) {
        printf("Erro na renomeação.\n");
    }
  
	}
	

}
