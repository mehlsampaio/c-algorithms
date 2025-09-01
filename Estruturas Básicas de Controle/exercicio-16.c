// Crie um programa que imprima um triangulo invertido de numeros. 
// O usuario entra com um numero n. 


#include <stdio.h>

int main(){
	int n;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	
	for(int i = n; i >= 1; i--){
		for(int j = 1; j <= i; j++){
			printf("%d ", j);
		}
	    printf("\n");
	}
	
	return 0;
}

