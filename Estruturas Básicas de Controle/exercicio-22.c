/*Imagine que voc� est� construindo um jogo em que o jogador deve adivinhar um n�mero secreto entre 1 e 10.
O programa deve continuar pedindo palpites at� que o n�mero correto seja adivinhado.
Use DO WHILE para garantir que o jogador tenha ao menos uma tentativa. O n�mero secreto deve ser 7. Ao acertar, exiba "Voc� acertou!".
*/


#include <stdio.h>

int main() {
	int contador = 0, numero = 7, palpite;
	
	printf("-- Adivinhe o numero secreto (entre 1 e 10) -- \n");
	
	do { 
		printf("Digite o seu palpite: ");
		scanf("%d", &palpite);
	} while (palpite != numero); 
	
	printf("Voce acertou!");
	
	return 0; 
}
