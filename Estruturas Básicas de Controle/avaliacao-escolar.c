// SISTEMA DE AVALIA��O ESCOLAR
// O programa deve apresentar o seguinte menu:
// 1 - verificar se o aluno foi aprovado; 2- sair.
// Se o usu�rio escolher a op��o 1, o programa deve solicitar a nota final (0 a 10) 
// e a frequencia (porcentagem de presen�a, de 0 a 100)
// O aluno s� ser� aprovado se a nota for maior ou igual a 7 e a frequencia maior ou igual a 75%, dentro do case 1.
// Se o usu�rio escolher a op��o 2, o programa deve encerrar. 
// Se for digitada um op��o inv�lida, exiba a mensagem "op��o inv�lida.". 

#include <stdio.h>

int main(){
	int opcao;
	float nota, frequencia;
	
	printf("Digite a opcao desejada: \n1 - Verificar se o aluno foi aprovado\n2- Sair\n");
	scanf("%d", &opcao); 
	
	switch (opcao) {
		case 1:
			printf("Digite a nota final do aluno: ");
			scanf("%f", &nota);
			
			printf("Digite a frequencia do aluno: ");
			scanf("%f", &frequencia);
			
			if(nota >= 7 && frequencia >= 75){
				printf("Aluno aprovado.");
			}else{
				printf("Aluno reprovado");
			}
	
			break; 
		case 2:
			printf("Saindo do programa...");
			break;
		default:
			printf("Opcao invalida.");
	}
	
	
	
	return 0;
}
