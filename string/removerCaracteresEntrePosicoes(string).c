/*Quest�o 04:
Desenvolver uma fun��o que remova de uma 
string s os caracteres compreendidos entre as 
posi��es p1 e p2. 
Caso p1 ou p2 seja uma posi��o inv�lida, a 
fun��o dever� retornar o valor 0 e a remo��o de 
caracteres solicitada n�o ser� realizada; caso 
contr�rio, dever� retornar 1 e proceder com o 
que foi pedido*/

#include<stdio.h>
#include<string.h>


int removerCaracteres(char s[],int p1,int p2);
int main(){
	
	int posicao1,posicao2;
	char string[20];
	
	printf("Digite a string S:");
	fflush (stdin);
    gets(string);
    
    printf("Digite a primeira posicao desta string:");
    scanf("%d",&posicao1);
    
    printf("Digite a segunda posicao desta string:");
    scanf("%d",&posicao2);
    
    
    if (removerCaracteres(string,posicao1,posicao2)==0){
    	printf("Erro posicoes invalidas");
	}
    
    printf("String %s",string);
}

int removerCaracteres(char s[],int p1,int p2){
	int i=p1,j=p2;
	
	if(p1<0 || p2>strlen(s) || p1>p2 || p2<p1 ){
		return 0;
	}
	while(s[p2]!='\0'){
		
		s[p1+1]=s[p2];
		
		p1++;
		p2++;
	}
	
	s[p1+1]='\0';
}
