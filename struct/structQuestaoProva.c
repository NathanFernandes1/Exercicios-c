/*Questão 03 [2,5 pontos]:
Considere a existência de um vetor de structs com
quant posições, onde cada uma destas armazena os
seguintes dados sobre os funcionários de uma
empresa: matricula (int), nome (string), gênero (char) e
salário (float). Pede-se uma função que, dado um
gênero, desloque todos os funcionários deste gênero
para o início do vetor (e, consequentemente, os
funcionários do outro gênero ficarão ao final do
conjunto).*/

#include<stdio.h>
#include<string.h>
#define TAM 7

typedef struct{
	char	nome[20];
	char	genero;
	int  	idade,matricula;
	float   salario;
}TFuncionario;

void exibirPessoas (TFuncionario vetor[], int quant);
int ordenarStruct(TFuncionario vet[], int quant,char genero);
int main ()
{
	//declaração de variáveis
	TFuncionario vetor[TAM];
	char genero;
	
	//inicializando o vetor de structs
	strcpy (vetor[0].nome, "CARLOS");
	vetor[0].genero = 'M';
	vetor[0].idade = 20;
	vetor[0].matricula = 1231;
	vetor[0].salario = 1200;
	
	strcpy (vetor[1].nome, "MARIA");
	vetor[1].genero = 'F';
	vetor[1].idade = 23;
	vetor[1].matricula = 1232;
	vetor[1].salario = 1200;

	strcpy (vetor[2].nome, "ADRIANA");
	vetor[2].genero = 'F';
	vetor[2].idade = 25;
	vetor[2].matricula = 1233;
	vetor[2].salario = 1200;

	strcpy (vetor[3].nome, "JOAO");
	vetor[3].genero = 'M';
	vetor[3].idade = 25;
	vetor[3].matricula = 1234;
	vetor[3].salario = 1200;

	strcpy (vetor[4].nome, "PEDRO");
	vetor[4].genero = 'M';
	vetor[4].idade = 25;
	vetor[4].matricula = 1235;
	vetor[4].salario = 1200;
	
	strcpy (vetor[5].nome, "CLARA");
	vetor[5].genero = 'F';
	vetor[5].idade = 28;
	vetor[5].matricula = 1236;
	vetor[5].salario = 1200;
	
	strcpy (vetor[6].nome, "PATRICIA");
	vetor[6].genero = 'F';
	vetor[6].idade = 28;
	vetor[6].matricula = 1237;
	vetor[6].salario = 1200;
	

	//exibindo o vetor antes da chamada à função
	exibirPessoas (vetor, TAM);
	
	printf("Digite um genero(M/F):");
	scanf("%c",&genero);

	ordenarStruct(vetor,TAM,genero);
	exibirPessoas (vetor, TAM);
	
}

void exibirPessoas (TFuncionario vetor[], int quant)
{
	//declaração de variáveis
	int i;
	
	//pulando linha
	printf ("\n\n");
	
	//percorrendo o vetor
	for (i=0;i<quant;i++)
	{
		printf ("Nome: %s\n", vetor[i].nome);
		printf ("Genero: %c\n", vetor[i].genero);
		printf ("Idade: %d\n\n", vetor[i].idade);
		printf ("Matricula: %d\n\n", vetor[i].matricula);
		printf ("Salario: %.2f\n\n", vetor[i].salario);
	}
}

int ordenarStruct(TFuncionario vet[], int quant,char genero){
	int i,j=0,k=quant-1;
	TFuncionario vetAux[quant];
	
	for(i=0;i<quant;i++){
		
		if(vet[i].genero==genero){
			strcpy (vetAux[j].nome, vet[i].nome);
			vetAux[j].genero = vet[i].genero;
			vetAux[j].idade = vet[i].idade;
			vetAux[j].matricula = vet[i].matricula;
			vetAux[j].salario = vet[i].salario;
			j++;
		}
		else{
			strcpy (vetAux[k].nome, vet[i].nome);
			vetAux[k].genero = vet[i].genero;
			vetAux[k].idade = vet[i].idade;
			vetAux[k].matricula = vet[i].matricula;
			vetAux[k].salario = vet[i].salario;
			k--;
		}
	}
	
	for(i=0;i<quant;i++){
			strcpy (vet[i].nome, vetAux[i].nome);
			vet[i].genero = vetAux[i].genero;
			vet[i].idade = vetAux[i].idade;
			vet[i].matricula = vetAux[i].matricula;
			vet[i].salario = vetAux[i].salario;
	}
}
