// Escreva um programa que exiba um triangulo num�rico com N linhas,
// onde cada linha tem o n�mero de 1 at� a posi��o atual (N)


#include <stdio.h>

int main(){
	
	int n = 5;
	
	for (int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			printf("%d ", j);
		}
		printf("\n");
	}
	
	
	return 0;
}
