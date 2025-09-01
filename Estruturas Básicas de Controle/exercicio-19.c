// CONTROLE DE REVIS�O DE CARROS
// O programa deve pedir ao usu�rio quantos carros ser�o registrados e para cada carro, solicitar:
// Modelo, Ano de fabrica��o e se est� funcionando normalmente (1 ou 0).

// Exibir uma mensagem indicando se o carro est� em boas condi��es ou se precisa de reparos urgentes
// se for muito antigo ou estiver com problemas. 

// Se o ano for menor que 2005 e o carro n�o estiver funcionando normalmente, retorne:
//"O carro X precisa de reparos urgentes!"
// Se o ano for menor que 2005 e o carro estiver funcionando normalmente, retorne:
// "O carro X � antigo, recomenda-se uma revisao!"
// Se o ano for igual ou maior que 2005 e n�o estiver funcionando normalmente, retorne:
// "O carro X precisa de manuten��o!"
// Se o ano for igual ou maior que 2005 e estiver funcionando normalmente, retorne:
// "O carro X est� em boas condicoes!"

#include <stdio.h>

int main(){
	int qtd;
	
	printf("Digite a quantidade de carros que serao registrados: ");
	scanf("%d", &qtd);
	
	for(int i = 1; i <= qtd; i++){
		int ano, funciona;
		char modelo[15];
		
		printf("Digite o modelo do carro: ");
		scanf("%s", &modelo);
		
		printf("Digite o ano de fabricacao do carro: ");
		scanf("%d", &ano);
		
		printf("Funciona normalmente? (1 - Sim, 0 - Nao)");
		scanf("%d", &funciona);
		
		if(ano < 2005 && funciona == 0){
			printf("O carro %s precisa de reparos urgentes!\n", modelo);
		}else if (ano < 2005){
			printf("O carro %s eh antigo, recomenda-se uma revisao!\n", modelo);
		}else if(funciona == 0){
			printf("O carro %s precisa de manutencao! \n", modelo);
		}else {
			printf("O carro %s esta em boas condicoes! \n", modelo);
		}
		
	}
	
	return 0; 
}

