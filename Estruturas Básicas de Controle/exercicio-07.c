// Escreva um programa que solicita ao usuário a idade de um jogador
// e verifica se ele pode jogar na categoria Sub-20(jogador com 20 anos ou menos).
// Se for mais velho, ele deve jogar na categoria profissional.


#include <stdio.h>

int main() {
	int idade;
	
	printf("Digite a idade do jogador: ");
	scanf("%d", &idade);
	
	if (idade <= 20){
		printf("Jogador pode jogar na categoria Sub-20");
	} else {
		printf("Jogador pode jogar na categoria profissional");
	}
	
	
	return 0; 
}
