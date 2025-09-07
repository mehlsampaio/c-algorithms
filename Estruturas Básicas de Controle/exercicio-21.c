/*
Um jogador precisa coletar moedas em um jogo. A cada rodada, ele coleta uma quantidade entre 1 e 10 moedas. 
O jogo só termina quando o jogador acumula pelo menos 100 moedas. Escreva um programa em C que solicite ao usuário, repetidamente, 
a quantidade de moedas coletadas por rodada, até que o total acumulado atinja ou ultrapasse 100 moedas. 
Ao final, exiba quantas rodadas foram necessárias para atingir a meta.
*/

#include <stdio.h>

int main() {
	int contador = 0, acumulador = 1, total;
	
	do {
		printf("Digite o total de moedas coletadas nesta rodada (entre 1 e 10): ");
		scanf("%d", &total);
		acumulador += total;
		contador ++;
	} while (acumulador <= 100);

	printf("Parabens! Voce atingiu a meta em %d rodadas", contador);
	
	return 0; 
}
