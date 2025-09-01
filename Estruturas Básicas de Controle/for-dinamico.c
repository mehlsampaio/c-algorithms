// LOOP FOR DINAMICO

#include <stdio.h>

int main(){
	
	int dias; 
	
	printf("Digite a quantidade de dias que voce treinou: ");
	scanf("%d", &dias);
	
	for(int i = 0; i < dias; i++){
		printf("Dia %d: Ta pago!\n", i + 1);
	}
	
	printf("Treinamento concluido.");
	
	return 0;
}
