/*
 *Autor:João Victor Valadares Fernandes
 *Matrícula:04065935
 *Turma: 4NMA - 4BCC
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    //Bloco das Variavéis
    float conta = 1000;
    int cheque_esp = 2000;
    int input;
    float deposito;
    float saque;
    float estouro;
    float descontado;
    
    //Bloco de entradas
    printf("---Programa de Conta Bancaria---")
    printf("Escolha 1 para realizar um deposito. Escolha 2 para realizar um saque: \n");
    scanf("%d", &input);


    //Bloco do processamento/Saída
    if (input == 1)
    {
        printf("Qual valor deseja depositar? ");
        scanf("%f", &deposito);
        printf("O seguinte valor foi depositado: %.2f\n", deposito);
        printf("saldo apos deposito: %.2f\n", deposito + conta);
    }else{
        if (input == 2){
            printf("Insira o valor que quer sacar: ");
            scanf("%f", &saque);
            if (saque > 1000){
                if (saque <= 3000){
                    printf("O seguinte valor foi sacado: %.2f\n", saque);
                    printf("Você estourou o limite e será descontado do cheque! \n");
                    descontado = saque - conta;
                    printf("Valor do cheque descontado: %.2f\n", cheque_esp - descontado);
                }else{
                    printf("O valor desejado é maior que saldo e o cheque juntos!");
                }
            }else{
                printf("O seguinte valor foi retirado com sucesso: %.2f\n", saque);
                printf("Novo saldo: %.2f\n", conta - saque);
            }
        }else{
            printf("Escolha uma opção!");
        }
    }
}