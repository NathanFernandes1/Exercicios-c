/*Questão 02 [2,5 pontos]:
Dada uma matriz M de inteiros (de apenas um 
algarismo), com x linhas e y colunas, desenvolver uma 
função que crie um vetor V de x posições contendo, em 
cada posição, as “representações numéricas” de cada 
linha de M, como ilustrado no exemplo abaixo:

             1 5 9
             4 2 7
        M =  4 8 8
             2 5 1
             7 1 1
            
    V = 159 427 488 251 711
*/

#include<stdio.h>
#define L 5
#define C 3

int preencherVetor(int mat[L][C],int vet[]);
int main(){
	int matriz[L][C]={
	{1,5,9},
	{4,2,7},
	{4,8,8},
	{2,5,1},
	{7,1,1}
	};
	int vetor[L];
	
	preencherVetor(matriz,vetor);
}
int preencherVetor(int mat[L][C],int vet[]){
	int i,j,soma=0;
	
	for(i=0;i<L;i++){
		
		for(j=0;j<C;j++){
			if(j==0){
				soma+=(mat[i][j]*100);
			}
			else if(j==1){
				soma+=(mat[i][j]*10);
			}
			else{
				soma+=mat[i][j];
			}
		}
		
		vet[i]=soma;
		printf("%d ",vet[i]);
		soma=0;
	}
}
