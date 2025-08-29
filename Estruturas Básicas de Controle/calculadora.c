#include <stdio.h>

int main() {
	char operador;
	float a, b; 
	
	
	printf("Digite a operacao (+, -, *, /): ");
	scanf("%c", &operador);
	
	printf("Digite os dois valores: ");
	scanf("%f %f", &a, &b);
	
	switch(operador){
		case '+':
			printf("%.2f %c %.2f = %.2f", a, operador, b, (a+b));
			break;
		case '-':
			printf("%.2f %c %.2f = %.2f", a, operador, b, (a-b));
			break;
		case '*':
			printf("%.2f %c %.2f = %.2f", a, operador, b, (a*b));
			break;
		case '/':
			if (a != 0 && b != 0){
				printf("%.2f %c %.2f = %.2f", a, operador, b, (a/b));
			} else {
				printf("Nao eh possivel fazer divisao por zero");			}
			break;
		default:
			printf("Operador invalido.");
	}
	
	
	return 0;
}
