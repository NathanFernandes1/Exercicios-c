/*Quest�o 03:
Desenvolver uma fun��o que, dada uma string
s, crie uma substring que inicie na posi��o p de
s e contenha n caracteres.
Observa��es: se p e/ou n forem inv�lidos, a
substring ser� vazia; ii) se s n�o possuir n
caracteres al�m de p, a substring a ser criada
come�ar� em p e terminar� no final de s.*/
#include<stdio.h>
#include<string.h>

int criarSubstring(char s1[], char subS[], int quantC, int p, int caracterSub);

int main(){
	
	int quantCaracteres,posicao,caracteresSubstring;
	char string[20],substring[20];
	
	printf("Digite a string:");
	fflush (stdin);
    gets(string);
    
    printf("Digite a posicao de inicio da substring:");
    scanf("%d",&posicao);
    
    printf("Digite a quantidade de caracteres da substring:");
    scanf("%d",&caracteresSubstring);
    
    quantCaracteres = strlen(string);
    
    if(criarSubstring(string,substring,quantCaracteres,posicao,caracteresSubstring)==1){
    	printf("Erro Substring vazia.");
	}
	else{
		printf("Substring:%s",substring);
	}
    
     

}

int criarSubstring(char s1[], char subS[], int quantC, int p, int caracterSub){
	int i=0,j=p;
	if(p>quantC-1||p<0||caracterSub<=0){
		return 1;
	}
	else{
		while(i<caracterSub&&s1[i]!='\0'){
			subS[i]=s1[j];
			
			i++;
			j++;
		}
		subS[j]='\0';
	}
}
