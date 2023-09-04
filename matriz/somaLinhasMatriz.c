/*Questão 03:
Pede-se o desenvolvimento de uma função recursiva que, dada uma matriz M de L linhas e C colunas, onde L e C são
constantes, e três linhas L1, L2 e L3, altere os elementos de L3, de forma que cada um consista na soma dos elementos
de L1 e L2, conforme ilustrado no exemplo abaixo:*/

#include<stdio.h>
#include<time.h>

#define L 5
#define C 5

void preencherMatriz(int m[L][C]);
void exibirMatriz(int m[L][C]);
void somarLinhas(int m[L][C],int lin1, int lin2, int lin3);
void somarLinhasRecursivo(int m[L][C], int lin1, int lin2, int lin3, int col);

int main(){
	int matriz[L][C],linha1,linha2,linha3;
	
	preencherMatriz(matriz);
	exibirMatriz(matriz);
	
	printf("\n\nDigite a primeira linha:");
	scanf("%d",&linha1);
	
	printf("\n\nDigite a segunda linha:");
	scanf("%d",&linha2);
	
	printf("\n\nDigite a terceira linha:");
	scanf("%d",&linha3);
	
	somarLinhas(matriz,linha1,linha2,linha3);
	
	exibirMatriz(matriz);
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
void exibirMatriz(int m[L][C]){
	int i,j;
	
	printf("\nElementos da matriz:\n\n");
	for(i=0;i<L;i++){
		
		for(j=0;j<C;j++){
			
			printf("%5d",m[i][j]);
		}
		printf("\n");
	}
}

void somarLinhasRecursivo(int m[L][C], int lin1, int lin2, int lin3, int col) {
    if (col >= C) {
        return; 
    }
    
    m[lin3][col] = m[lin1][col] + m[lin2][col];
    
    somarLinhasRecursivo(m, lin1, lin2, lin3, col + 1); 
}

void somarLinhas(int m[L][C], int lin1, int lin2, int lin3) {
    somarLinhasRecursivo(m, lin1, lin2, lin3, 0); 
}

