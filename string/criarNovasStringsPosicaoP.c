/*Questão 03:
Desenvolver uma função, em C, que, dada uma 
string s e dada uma posição p desta string, crie duas 
novas strings: s1 com os caracteres de s das 
posições 0 a p-1; e s2 com os caracteres de s da 
posição p à última.
Nota: Caso p seja uma posição inválida, a função 
deverá retornar o valor 0; caso contrário, 
procederá com a criação das duas strings e 
retornará o valor 1.*/

#include<stdio.h>
#include<string.h>

int criarNovasStrings(char s[], int p,char s1[], char s2[]);

int main(){
	
	int posicao;
	char string[20],string1[20],string2[20];
	
	printf("Digite a string S:");
	fflush (stdin);
    gets(string);
    
    printf("Digite uma posicao desta string:");
    scanf("%d",&posicao);
    
    if (criarNovasStrings(string,posicao,string1,string2)==0){
    	
    	printf("ERRO! Posicao invalida!");
	}
	else{
		printf("String 1: %s \nstring 2: %s",string1,string2);
	}
    
}

int criarNovasStrings(char s[], int p,char s1[], char s2[]){
	int i=0;
	
	if(p>=strlen(s)|| p<=0){
		return 0;
	}
	
	while(i<strlen(s)){
		if(i<p){
			s1[i]=s[i];
		}
		else{
			s2[i-p]=s[i];
		}
		i++;
	}
	
	s1[p]='\0';
	s2[i-p]='\0';
	
	return 1;
}

