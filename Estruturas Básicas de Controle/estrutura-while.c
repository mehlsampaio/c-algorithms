// ESTRUTURA DO LOOP WHILE
// Condição testada antes de executar o bloco. 
// Se a condição for falsa logo no inicio, o bloco não é executado nenhuma vez.
// Utilizado quando o número de repetições é indefinido.

#include <stdio.h>

int main() {
	int contador = 1;
	
	while (contador <= 5) {
		printf("Contando: %d\n", contador); 
		contador++;
	}
	
	return 0;
}
