// Um jogador recebe cartão vermelho se receber 2 cartões amarelos no jogo. 
// Escreva um programa que verifica se um jogador será expulso, baseado na qtd de cartões amarelos.

#include <stdio.h>

int main() {
	int cartoes = 2;
	
	if (cartoes == 2){
		printf("O jogador sera expulso.");
	} else {
		printf("O jogador nao sera expulso.");
	}
	
	return 0;
}
