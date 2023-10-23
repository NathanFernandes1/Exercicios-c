#include <stdio.h>

int decomporNumeroRecursivo(int numero) {
    if (numero == 0) {
        return 0; 
    }
    return (numero % 10)+decomporNumeroRecursivo(numero / 10); 
     
}

int main() {
    int numero = 15;
    int retorno;
	
	retorno = decomporNumeroRecursivo(numero);
    
    printf("Soma dos algarismos: %d ",retorno);
}

