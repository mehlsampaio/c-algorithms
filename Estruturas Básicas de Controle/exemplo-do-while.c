// ESTRUTURA DO LOOP DO WHILE
// Condição testada depois de executar o bloco.
// Garante que o bloco será executado pelo menos uma vez, mesmo que a condição seja falsa.

#include <stdio.h>

int main() {
	int senha; 
	
	do {
		printf("Digite a senha correta (1234): ");
		scanf("%d", &senha);	
	} while(senha != 1234); 
	
	printf("Entrada liberada.");
	
	return 0;
}
