/*Questão 01:
Considerando a existência de uma matriz de inteiros M, de ordem N (ou seja, o no de linhas e o no de colunas são iguais a
N), onde N é uma constante, desenvolver uma função que retorne 1 se a seguinte regra for atendida por M (caso contrário,
o valor 0 deverá ser retornado):
? A soma dos elementos da diagonal principal deve ser igual à soma dos elementos que estão acima desta
diagonal, assim como à soma dos elementos abaixo da diagonal.*/
#include<stdio.h>
#define N 5

int somarMatriz(int m[N][N]);
void exibirMatriz(int m[N][N]);


int main(){
	int matriz[N][N]= {
	{6,3,1,2,6},
	{1,3,5,4,2},
	{3,4,4,2,2},
	{5,9,1,9,3},
	{4,0,2,1,8}
	};
	
	exibirMatriz(matriz);
	
	if(somarMatriz(matriz)==1){
		printf("\n\nA soma dos elementos da diagonal principal SAO iguais a soma dos elementos que estao acima e abaixo desta diagonal.");
	}
	else{
		printf("\n\nA soma dos elementos da diagonal principal NAO SAO iguais a soma dos elementos que estao acima e abaixo desta diagonal.");
	}
}

int somarMatriz(int m[N][N]){
	int i,j,diagonal=0,cima=0,baixo=0;
	
	//Somanda elementos da diagonal principal
	for (i=0,j=0;i<N;i++,j++){
		
		diagonal+=m[i][j];
	}
	
	//Somando os elementos acima da diagonal principal
	for(i=0;i<N;i++){
		
		for(j=i+1;j<N;j++){
			cima+=m[i][j];
		}
	}

	//Somando os elementos abaixo da diagonal principal
	for(i=1;i<N;i++){
		
		for(j=0;j<i;j++){
			baixo+=m[i][j];
		}
	}
	
	if(diagonal==cima&&diagonal==baixo){
		return 1;
	}
	else{
		return 0;
	}
	
	
}

void exibirMatriz(int m[N][N]){
	int i,j;
	
	printf("Elementos da matriz:\n");
	for(i=0;i<N;i++){
		
		for(j=0;j<N;j++){
			
			printf("%5d",m[i][j]);
		}
		printf("\n");
	}
}
