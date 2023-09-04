/*QUESTÃO 06:
Considere uma loja que mantém em uma
matriz o total vendido por cada funcionário
pelos diversos meses do ano. Ou seja, uma
matriz de 12 linhas (uma por mês) e 10 colunas
(10 funcionários). Pede-se o desenvolvimento
de uma função para cada item abaixo:
va. 
a.Calcular o total vendido durante o ano;
b. Dado um mês fornecido pelo usuário,
determinar o total vendido nesse mês;
c. Dado um funcionário fornecido pelo
usuário, determinar o total vendido por ele
durante o ano;
d. Determinar o mês com maior índice de
vendas;
e. Determinar o funcionário que menos
vendeu durante o ano.*/

#include<stdio.h>
#include<time.h>
#include<float.h>

#define L 12
#define C 10

void preencherMatriz(float m[L][C]);
void exibirMatriz(float m[L][C]);
char menuOpcoes();
float valorTotalVendasAno(float m[L][C]);
float valorTotalVendasMes(float m[L][C], int mes);
float valorTotalVendasFuncionario(float m[L][C], int func);
int maiorIndiceVendasMes(float m[L][C]);
int funcionarioMenosVendeuAno(float m[L][C]);

int main(){
	float matriz[L][C];
	int mes,funcionario;
	
	preencherMatriz(matriz);
	exibirMatriz(matriz);
	
	while(1){
		
		switch(menuOpcoes()){
			case 'A':
				printf("\nValor total das vendas ao ano:R$%.2f",valorTotalVendasAno(matriz));
				break;
			
			case 'B':
				printf("Digite um mes(1-12):");
				scanf("%d",&mes);
				
				printf("\nValor total vendido neste mes:R$%.2f",valorTotalVendasMes(matriz,mes));
				break;
				
			case 'C':
				printf("Diga um funcionario de 1 a 10:");
				scanf("%d",&funcionario);
				
				printf("\nValor total vendido por este funcionario em um ano:R$%.2f",valorTotalVendasFuncionario(matriz,funcionario));
				break;
				
			case 'D':
				printf("\nO mes %d teve o maior indice de vendas",maiorIndiceVendasMes(matriz));
				break;
				
			case 'E':
				printf("\nO funcionario de numero %d foi o que menos vendeu durante o ano",funcionarioMenosVendeuAno(matriz));
				break;
				
			case 'S':
				printf("\nPrograma encerrado.");
				return 0;
				
			default :
				printf("Erro! Opcao invalida.");
		}
	}
}

void preencherMatriz (float m[L][C]){
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

void exibirMatriz(float m[L][C]){
	int i,j;
	
	printf("Elementos da matriz:\n\n");
	for(i=0;i<L;i++){
		
		for(j=0;j<C;j++){
			printf("%10.2f",m[i][j]);
		}
		printf("\n");
	}
}

char menuOpcoes(){
	char opcao;
	
	printf("\n\nO que deseja? \n\n");
	printf("A - Calcular o total vendido durante o ano.\n");
	printf("B - O total vendido de um determinado mes.\n");
	printf("C - O total vendido durante um ano por um determinado funcionario.\n");
	printf("D - Obter o mes com maior indice de vendas.\n");
	printf("E - Obter o funcionario que menos vendeu durante o ano.\n");
	printf("S - Sair.\n");
	fflush(stdin);
	scanf("%c",&opcao);
	
	opcao=toupper(opcao);
	
	
}

float valorTotalVendasAno(float m[L][C]){
	float total=0;
	
	int i,j;
	
	for(i=0;i<L;i++){
		
		for(j=0;j<C;j++){
			
			total+=m[i][j];
		}
	}
	
	return total;
}

float valorTotalVendasMes(float m[L][C], int mes){
		float total=0;
	
	int i,j;
	
	if(mes<1||mes>12){
		return 0;
	}
	for(i=mes-1;i<mes;i++){
		
		for(j=0;j<C;j++){
			
			total+=m[i][j];
		}
	}
	
	return total;
}

float valorTotalVendasFuncionario(float m[L][C], int func){
		int i,j,total=0;
	
	if(func<1||func>10){
		return 0;
	}
	for(i=0;i<L;i++){
		
		for(j=func-1;j<func;j++){
			
			total+=m[i][j];
		}
	}
	
	return total;
}

int maiorIndiceVendasMes(float m[L][C]){
	float maior=FLT_MIN,soma=0;
	int i,j,mes;
	
	for(i=0;i<L;i++){
		
		
		for(j=0;j<C;j++){
			
			soma+=m[i][j];
		}
		
		if(soma>maior){
			maior=soma;
			mes=i;
		}
		soma=0;
	}
	
	return mes+1;
}

int funcionarioMenosVendeuAno(float m[L][C]){
	float menor=FLT_MAX,soma=0;
	int i,j,funcionario;
	
	for(i=0;i<C;i++){
		
		
		for(j=0;j<L;j++){
			
			soma+=m[j][i];
		}
		
		
		if(soma<menor){
			menor=soma;
			
			funcionario=i;
		}
		soma=0;
		
	}
	
	return funcionario+1;
}
