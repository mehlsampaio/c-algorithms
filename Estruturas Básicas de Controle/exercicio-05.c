// Peça ao usuário os salários de dois jogadores de futebol e mostre a diferença entre eles.

#include <stdio.h>
#include <math.h>

int main() {
	float salarioJogador1, salarioJogador2, diferenca; 
	
	printf("Digite o salario do jogador 1: ");
	scanf("%f", &salarioJogador1);
	
	printf("Digite o salario do jogador 2: ");
	scanf("%f", &salarioJogador2); 
	
	diferenca = fabs(salarioJogador1 - salarioJogador2);
	
	if (diferenca == 0) {
		printf("Os salario sao iguais \n");
	} else {
		printf("A diferenca de salario eh de: %.2f \n", diferenca);
	}
	
	return 0;
	
}

