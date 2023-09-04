/*QUESTÃO 01:
Faça uma função que, dada uma matriz M8×5 de reais, 
gere a matriz Mt, sua transposta.*/
#include<stdio.h>
#include<time.h>

#define L 8
#define C 5

void preencherMatriz (float m[L][C]);
void exibir (float m[L][C]);
void matrizTransposta (float m[L][C], float mt[C][L]);
void exibirTransposta (float m[C][L]);

int main(){
	float matriz[L][C], transposta[C][L];
	
	preencherMatriz (matriz);
	
	exibir (matriz);
	
	matrizTransposta(matriz,transposta);
	
	
	exibirTransposta (transposta);	
}

void preencherMatriz (float m[L][C])
{
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

void exibir (float m[L][C]){
	int i,j;
	
	printf ("\nElementos da matriz:\n\n");
	for(i=0;i<L; i++){
		
		for(j=0;j<C; j++){
			
			printf("%5.1f ",m[i][j]);
		}
		
		printf("\n");
	}
}

void matrizTransposta (float m[L][C], float mt[C][L]){
	 int i,j;
	 
	  printf ("\nElementos da matriz transposta:\n\n");
		for(i=0;i<C; i++){
		
		 for(j=0;j<L; j++){
			
			mt[i][j]=m[j][i];
		}
		
	
	}
}

void exibirTransposta (float m[C][L])
{	
	int i, j;
	
	for (i=0;i<C;i++)
	{
		
		for (j=0;j<L;j++)
		{
			printf ("%5.1f ", m[i][j]);
		}
		
		printf ("\n");
	}
	
	printf ("\n\n");
}

