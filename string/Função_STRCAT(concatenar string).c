#include<stdio.h>
#include<string.h>
#define TAM 20

void concatenarString(char s1[],char s2[],int tamanho);

int main(){
	char string[TAM],string2[TAM];
	
	printf("Digite a primeira string:");
	fflush (stdin);
    gets(string);
    
    printf("Digite a segunda string:");
	fflush (stdin);
    gets(string2);
    
    concatenarString(string,string2,TAM);
    
    printf("String concatenada:%s",string);
    
}
void concatenarString(char s1[],char s2[],int tamanho){
	int i,j=0;
	
	
	for(i=strlen(s1);i<tamanho-1;i++){
		
		if(s2[j]=='\0'){
			break;
		}
		s1[i]=s2[j];
		j++;
	}
	s1[i]='\0';
	printf("%d",i);
	
}
