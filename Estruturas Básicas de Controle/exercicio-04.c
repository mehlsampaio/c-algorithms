// Crie um programa que pe�a o n�mero de vit�rias, empates e derrotas de um time.
// Depois, calcule o n�mero total de pontos, seguindo a regra:
// vit�ria = 3 pontos; Empate = 1 ponto; Derrota = 0 pontos. 


#include <stdio.h>

int main() {
	int vitorias;
	int empates; 
	int derrotas;
	int totalPontos; 
	
	printf("Digite o total de vitorias do seu time: ");
	scanf("%d", &vitorias);
	
	printf("Digite o total de empates do seu time: ");
	scanf("%d", &empates);
	
	printf("Digite o total de derrotas do seu time: ");
	scanf("%d", &derrotas);
	
	totalPontos = (vitorias * 3) + (empates *1); 
	
	printf("O numero total de pontos do time eh: %d", totalPontos);
	
	return 0;
	
}
