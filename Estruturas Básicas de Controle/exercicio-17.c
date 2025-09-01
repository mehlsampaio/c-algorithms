// Escreva um programa que exiba uma piramide de numeros páres com N linhas. 


#include <stdio.h>

int main(){
	
	int n = 10, numero = 2;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			printf("%d ", numero);
			numero += 2;
		}
		
		printf("\n");
	}	
	
	return 0;
}
