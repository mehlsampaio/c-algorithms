// SISTEMA DE CONTROLE DE ESTOQUE 
// Crie um programa que pede a quantidade de produtos que o usuario deseja cadastrar
// e para cada produto o programa deve solicitar: O nome do produto, qtd em estoque,
// estoque minimo recomendado, e exibir imediatamente se o produto precisa de reposição ou não. 

#include <stdio.h>

int main(){
	int qtd;
	
	printf("Digite a quantidade de produtos a serem cadastrados: ");
	scanf("%d", &qtd); 
	
	for(int i = 1; i <= qtd; i++){
		int qtdEstoque, qtdMinima;
		char nome[15];
		
		printf("Digite o nome do produto: ");
		scanf("%s", &nome);
		
		printf("Digite a quantidade em estoque: ");
		scanf("%d", &qtdEstoque); 
		
		printf("Digite o estoque minimo recomendado: ");
		scanf("%d", &qtdMinima);	
		
		if(qtdEstoque < qtdMinima){
			printf("O produto %s precisa ser reposto! (Estoque: %d, Minimo: %d)\n", nome, qtdEstoque, qtdMinima);
		} else {
			printf("O produto %s tem estoque suficiente. (Estoque: %d, Minimo: %d)\n", nome, qtdEstoque, qtdMinima);
		}
	}
		
	return 0;
	
}



