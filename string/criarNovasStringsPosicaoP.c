/*Quest�o 03:
Desenvolver uma fun��o, em C, que, dada uma 
string s e dada uma posi��o p desta string, crie duas 
novas strings: s1 com os caracteres de s das 
posi��es 0 a p-1; e s2 com os caracteres de s da 
posi��o p � �ltima.
Nota: Caso p seja uma posi��o inv�lida, a fun��o 
dever� retornar o valor 0; caso contr�rio, 
proceder� com a cria��o das duas strings e 
retornar� o valor 1.*/

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

