/*
 *Autor: João Victor Valadares Fernandes
 *Matrícula: 04065935
 *Turma:4NMA 
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float prod;
    float total;
    printf("Insira o preço do produto: ");
    scanf("%f", &prod);
    if (prod < 90){
        prod = prod * 0.10;
        printf("O valor com desconto será de: %.2f\n", prod);
    }
    else{
        if (prod >= 90 && prod <= 150){
            prod = prod * 0.15;
            printf("O valor com desconto sera de: %.2f\n", prod);
        }
        else{
            prod = prod * 0.25;
            printf("O valor com desconto sera de: %.2f\n", prod);
        }
    }
}
