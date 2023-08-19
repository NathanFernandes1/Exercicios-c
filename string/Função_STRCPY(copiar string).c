#include<stdio.h>

void copiarString(char s1[],char s2[]);

int main(){
	
	char string[20],string2[20];
	
	printf("Digite a primeira string:");
	fflush (stdin);
    gets(string);
    
    printf("Digite a segunda string:");
	fflush (stdin);
    gets(string2);
    
    copiarString(string,string2);
    
    printf("String2:%s",string2);
}
void copiarString(char s1[],char s2[]){
	int i=0;
	
	
	while(s1[i]!='\0'){
		s2[i]=s1[i];
		i++;
	}
	s2[i]='\0';

}
