/*Questão 03 [2,5 pontos]:
Fazer uma função que, dada uma string contendo 
apenas letras e separadores (espaços, vírgulas, pontos, 
etc.), crie um vetor de structs no qual cada posição 
conterá: uma palavra da string, a quantidade de vogais
e a quantidade de consoantes nesta palavra.
Exemplo:

S = “FUNDAMENTOS DE PROGRAMACAO”
palavras  FUNDAMENTOS DE PROGRAMACAO
vogais      4 1 5
consoantes  7 1 6
*/

#include<stdio.h>
#include<string.h>
#define TAM 3
typedef struct{
	char palavras[20];
	int vogais,consoantes;
}TDados;

int preencherStruct(char s1[],TDados vet[],int tamanho);

	int main(){
		int i;
		char string[50]={"FUNDAMENTOS DE PROGRAMACAO"};
		TDados vetor[TAM];
		
		preencherStruct(string,vetor,TAM);
		
		for(i=0;i<3;i++){
		printf("%s %d %d\n",vetor[i].palavras,vetor[i].vogais,vetor[i].consoantes);
	}
}

int preencherStruct(char s1[],TDados vet[],int tamanho){
	int i,j=0,k=0,somaVogais=0,somaConsoantes=0;
	char sAux[TAM],c;
	
	for(i=0;i<=strlen(s1);i++){
		if(s1[i]==' '||s1[i]=='\0'||s1[i]=='.'||s1[i]==','){
			sAux[j]='\0';
		strcpy( vet[k].palavras,sAux);
			j=0;
			vet[k].vogais=somaVogais;
			vet[k].consoantes=somaConsoantes;
			somaConsoantes=0;
			somaVogais=0;
			k++;
			
		}
		else{
			c = toupper(s1[i]); 

    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        somaVogais+=1;
    } else {
        somaConsoantes+=1;
    }
			sAux[j]=s1[i];
		j++;
		}
		
	}
}
