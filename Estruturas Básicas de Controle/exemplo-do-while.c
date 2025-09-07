// ESTRUTURA DO LOOP DO WHILE
// Condi��o testada depois de executar o bloco.
// Garante que o bloco ser� executado pelo menos uma vez, mesmo que a condi��o seja falsa.

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
