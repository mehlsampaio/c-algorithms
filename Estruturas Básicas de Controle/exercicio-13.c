// Escreva um programa que recebe um numero inteiro do usuario e imprime a tabuada desse numero de 0 a 10.

#include <stdio.h>

int main(){
	
	int n;
	
	printf("Digite um numero inteiro: ");
 	scanf("%d", &n);
 	
 	printf("\n ---- TABUADA DO %d ---- \n", n);
 	
 	for(int i = 0; i <= 10; i++){
 		printf("%d X %d = %d \n", n, i, i * n);
	 }
	
	
	return 0;
}
