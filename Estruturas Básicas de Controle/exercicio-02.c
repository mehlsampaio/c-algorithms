// Escreva um programa que receba o número total de gols de um jogador
// e a quantidade de partidas jogadas. Depois, calcule e exiba
// a média de gols por partida. 

#include <stdio.h>

int main() {
	int totalGols;
	int qtdPartidas; 
	float mediaGols;
	
	printf("Digite o total de gols feitos: ");
	scanf("%d", &totalGols);
	
	printf("Digite a quantidade de partidas jogadas: ");
	scanf("%d", &qtdPartidas); 
	
	mediaGols = (float)totalGols / qtdPartidas;
	
	printf("A media de gols por partida eh: %.2f", mediaGols);
	
	return 0;
}
