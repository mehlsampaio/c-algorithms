// Crie um programa que exiba um menu com 4 op��es:
// 1 - Hamb�rguer; 2 - Cachorro-quente; 3 - Pizza; 4 - Sair.
// O usu�rio deve digitar a op��o desejada e o programa deve mostrar uma mensagem
// correspondente. Se o usu�rio digitar 4, o programa deve exibir "Encerrando pedido...".
// Se digitar qualquer outro n�mero, mostrar "Op��o inv�lida."

#include <stdio.h>

int main(){
	int opcao;
	
	printf("Digite a opcao desejada: \n1 - Hamburguer\n2 - Cachorro-quente\n3 - Pizza\n4 - sair\n");
	scanf("%d", &opcao);
	
	switch (opcao){
		case 1:
			printf("Vc escolheu hamburguer.");
			break;
		case 2:
			printf("Vc escolheu cachorro-quente.");
			break;
		case 3:
			printf("Vc escolheu pizza.");
			break;
		case 4:
			printf("Encerrando pedido...");
			break;
		default:
			printf("Opcao invalida.");
	}
	
	
	
	return 0; 
}
