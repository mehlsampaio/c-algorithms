// ESTRUTURA DO LOOP WHILE
// Condi��o testada antes de executar o bloco. 
// Se a condi��o for falsa logo no inicio, o bloco n�o � executado nenhuma vez.
// Utilizado quando o n�mero de repeti��es � indefinido.

#include <stdio.h>

int main() {
	int contador = 1;
	
	while (contador <= 5) {
		printf("Contando: %d\n", contador); 
		contador++;
	}
	
	return 0;
}
