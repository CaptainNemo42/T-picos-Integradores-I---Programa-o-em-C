/*
 *Autor:João Victor Valadares Fernandes
 *Matrícula:04065935
 *Turma: 4NMA - 4BCC
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	//Bloco das Variavéis
	float dinheiro;
	int cedulas;
	float centavos;

	//Bloco de entradas
	printf("---Calculadora Pagamento RJR---\n");
	printf("Insira o valor a ser pago: \n");
	scanf("%f", &dinheiro);

	//Bloco do processamento
	cedulas = dinheiro / 3;
	centavos = dinheiro/3;

	//Saídas
	printf("O total sera dividido em partes iguais então: \n");
	printf("Joao paga: %d",cedulas);
	printf("Ricardo paga: %d",cedulas);
	printf("rodrigo paga: %.1f\n", centavos);
	system("PAUSE");
}
