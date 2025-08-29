// Peça para o usuário digitar o tempo jogado em minutos.
// Depois, converta esse valor para horas e minutos e exiba
// o resultado.


#include <stdio.h>

int main() {
	int totalMinutos;
	int horas;
	int minutos;
	
	printf("Digite o tempo jogado em minutos: ");
	scanf("%d", &totalMinutos);
	
	horas = totalMinutos / 60;
	minutos = totalMinutos % 60;
	
	printf("%d minutos jogados sao %d horas e %d minutos", totalMinutos, horas, minutos);	
	
	
}
