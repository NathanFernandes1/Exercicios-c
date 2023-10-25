/*Questão 01 [2,5 pontos]:
Implementar uma função que, dadas duas strings s1 e 
s2, determine se s2 possui (retornando 1) ou não 
(retornando 0) os mesmos caracteres de s1, na mesma 
quantidade, mesmo que embaralhados.*/

#include<stdio.h>
#include<string.h>

int	verificarCaracteres(char s1[],char s2[]);
int main(){
	char string1[20]={"aaaa"},string2[20]={"aaaa"};
	
	verificarCaracteres(string1,string2);
}

int	verificarCaracteres(char s1[],char s2[]){
	int soma=0,soma2=0,i;
	
	for(i=0;i<strlen(s1);i++){
		soma+=(int)s1[i];
		soma2+=(int)s2[i];
	}
	
	if(soma==soma2){
		return 1;
	}
	else{
		return 0;
	}
	printf("String 1: %d\n",soma);
	printf("String 2: %d\n",soma2);
}
