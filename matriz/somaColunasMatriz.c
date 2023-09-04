/*QUESTÃO 05:
Implementar uma função que, dada uma matriz
M10×8, gere um vetor V de tamanho 8, onde
cada elemento do vetor consiste na soma dos
elementos de uma coluna de M. Ou seja, o
elemento V[0] consiste na soma dos elementos
da primeira coluna de M, o elemento V[1]
consiste na soma dos elementos da segunda
coluna de M, e assim por diante.*/

#include<stdio.h>
#include<time.h>

#define L 10
#define C 8
#define TAM 8

void preencherMatriz (int m[L][C]);
void preencherVetor(int v[],int tamanho,int m[L][C]);
void exibirMatriz (int m[L][C]);
void exibirVetor(int v[],int tamanho);

int main(){
	int matriz[L][C],vetor[TAM];
	
	preencherMatriz(matriz);
	
	preencherVetor(vetor,TAM,matriz);
	
	exibirMatriz(matriz);
	
	exibirVetor(vetor,TAM);
}

void preencherMatriz (int m[L][C]){
	int i, j;
	
	srand (time(NULL));
	
	for (i=0;i<L;i++)
	{
		for (j=0;j<C;j++)
		{
			m[i][j] = rand () % 100;
		}
	}
}

void preencherVetor(int v[],int tamanho,int m[L][C]){
	int i,j,soma=0;
	
	for(i=0;i<C;i++){
		
		for(j=0;j<L;j++){
			soma+=m[j][i];
		}
		
		v[i]=soma;
		soma=0;
	}
	
}

void exibirMatriz (int m[L][C]){
	int i, j;
	
	printf ("\nElementos da matriz:\n\n");
	
	for (i=0;i<L;i++)
	{
		for (j=0;j<C;j++)
		{
			printf ("%5d ", m[i][j]);
		}
		
		printf ("\n");
	}
	
	printf ("\n\n");
}

void exibirVetor(int v[],int tamanho){
	int i;
	
	printf("\nSoma das colunas da matriz:\n\n");
	for(i=0;i<tamanho;i++){
		
		printf("%5d ",v[i]);
	}
}
