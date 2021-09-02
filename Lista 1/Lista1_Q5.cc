#include<stdio.h>
#include<stdlib.h>

/*
 *Autor:João Victor Valadares Fernandes
 *Matrícula:04065935
 *Turma: 4NMA - 4BCC
 */

int main(){

    //Bloco das variaveis
    int flex, premium, gold;
    int quant_desconto;
    int total;

    float kg;
    float compra;
    float val_final;
    float porcent;

    //bloco das entradas
    printf("----Programa Vendedor de racao----\n");

    printf("Insira quantos pacotes de racao flex deseja: \n");
    scanf("%d", &flex);

    printf("Insira quantos pacotes de racao premium deseja: \n");
    scanf("%d", &premium);

    printf("Insira quantos pacotes de racao gold deseja: \n");
    scanf("%d", &gold);

    //Processamento
    if (flex > 0){
        quant_desconto = quant_desconto + 10;
        porcent = porcent + 0.10;
    }

    if(premium > 0){
        quant_desconto = quant_desconto + 20;
        porcent = porcent +  0.20;
    }

    if(gold > 0){
        quant_desconto = quant_desconto + 30;
        porcent = porcent +  0.30;
    }

    //saidas
    total = (flex * 10) + (premium * 10) + (gold * 10);
    printf("O preço sem desconto é: %d\n", total);

    val_final = total + quant_desconto;
    printf("O valor a ser descontado é: %d\n", quant_desconto);

    kg = (flex * 20) + (premium * 20) + (gold * 20);
    printf("Quantidade de ração comprada:%.1f\n", kg);

    system("PAUSE");
}