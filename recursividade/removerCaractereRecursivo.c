/*Questão 10:
Implementar uma função recursiva que,
dados uma string str e um caracter ch,
remova de str todas as ocorrências de ch,
retornando o total de remoções realizadas.*/
#include<stdio.h>
#include<string.h>

int removerCaractere(char s1[], char ca);
int removerCaractereRecursivo(char s1[],char ca,int i);
int remover(char s1[],int i);
int main(){
	
	char string[20],caractere;
	
	printf("Digite a string:");
	fflush (stdin);
    gets(string);
	
	printf("Digite o caracter a ser removido:");
	scanf("%c",&caractere);
    
    removerCaractere(string,caractere);
    
    printf("string:%s",string);
}

int removerCaractere(char s1[], char ca){
	
	removerCaractereRecursivo(s1,ca,0);
}

int removerCaractereRecursivo(char s1[],char ca,int i){
	if(s1[i]=='\0'){
		return 0;
	}
	else{
		if(s1[i]==ca){
			remover(s1,i);
		}
		
			removerCaractereRecursivo(s1,ca,i+1);
		
	}
}

int remover(char s1[],int i){
	if(i<strlen(s1)-1){
		s1[i]=s1[i+1];
		remover(s1,i+1);
	}
	else{
		s1[i]='\0';
		return 0;
	}
}
