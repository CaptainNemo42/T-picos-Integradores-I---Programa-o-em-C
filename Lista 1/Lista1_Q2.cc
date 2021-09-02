/*
 *Autor:João Victor Valadares Fernandes
 *Matrícula:04065935
 *Turma: 4NMA - 4BCC
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Bloco das Variavéis
    float qtd_prod;
    float sal_final;
    float total_prod;
    float soma;

    //Bloco de entradas
    printf("Calculadora de Salario de vendas, insira o numero de produtos vendidos: \n");
    scanf("%f", &qtd_prod);

    //Bloco do processamento
    total_prod = qtd_prod;
    soma = total_prod + 1000;
    printf("Soma: %.2f\n", soma);

    //Saídas
    sal_final = soma + (soma0.03);
    printf("O valor das vendas com o reajuste foi de: %.2f\n", sal_final);
}
