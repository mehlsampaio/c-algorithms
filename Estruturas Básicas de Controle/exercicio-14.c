// O usuario digita um numero n e o programa imprime todos os numeros pares de 1 até n.

#include <stdio.h>

int main(){
	int n;
	
	printf("Digite um numero inteiro: ");
 	scanf("%d", &n);
 	
 	printf("\nNumero pares de 1 ate %d: \n", n);
	
	for(int i = 1; i <= n; i++){
		if(i % 2 == 0){
			printf("%d ", i);
		}
	}
	
	
	return 0;
}
