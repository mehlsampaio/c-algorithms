// Crie um programa que peça o primeiro nome de um jogador, sua idade,
// e a quantidade de gols que ele fez em sua carreira.
// Em seguida, exiba essas informações na tela. 

#include <stdio.h>

int main() {
	char nome[10]; 
	int idade;
	int gols; 
	
	printf("Digite o seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	printf("Digite o total de gols feitos: ");
	scanf("%d", &gols);
	
	printf("nome: %s \n idade: %d \n gols: %d", nome, idade, gols);
	
	return 0;
	
}
