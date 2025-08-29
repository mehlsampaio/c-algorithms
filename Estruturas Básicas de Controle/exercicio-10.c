// Escreva um programa que solicita ao usu�rio: capacidade total do est�dio, 
// e a qtd de torcedores presentes no jogo. Com base na taxa de ocupa��o do estadio, o programa deve
// classificar a partida da seguinte forma:
// Se o est�dio estiver com mais de 90% da capacidade ocupada: "Lotado!"
// Se estiver entre 70% e 90%: "�tima presen�a de p�blico!"
// Se estiver entre 50% e 70%: "Publico razoavel."
// Se estiver abaixo de 50%: "Morumbis

#include <stdio.h>

int main() {
	int capacidadeTotal, qtdTorcedores;
	float taxa;
	
	printf("Digite a capacidade total do estadio: ");
	scanf("%d", &capacidadeTotal);
	
	printf("Digite a quantidade de torcedores presentes no jogo: ");
	scanf("%d", &qtdTorcedores); 
	
	taxa = ((float)qtdTorcedores/capacidadeTotal)* 100;
	
	if (taxa > 90){
		printf("Lotado!");
	}else if (taxa >= 70 && taxa <=90){
		printf("Otima presenca de publico!");
	}else if (taxa >= 50 && taxa <=70){
		printf("Publico razoavel.");
	}else {
		printf("Morumbis.");
	}
	
	return 0;
}


