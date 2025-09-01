// O usuario digita um numero n e o program calcula a soma de todos os numero de 1 até n.

#include <stdio.h>

int main(){
	
	int n, soma = 0;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		soma += i;
	}
	
	printf("A soma de 1 ate %d eh: %d", n, soma);
	
	
	return 0; 
}
