// Um jogador recebe cart�o vermelho se receber 2 cart�es amarelos no jogo. 
// Escreva um programa que verifica se um jogador ser� expulso, baseado na qtd de cart�es amarelos.

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
