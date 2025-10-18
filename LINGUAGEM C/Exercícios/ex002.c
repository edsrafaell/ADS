#include <stdio.h>

int main(){
    float salarioBase, quantidadeHE, valorHE, percentualBonificacao, horaExtra, bonificacao, salarioFinal;

    printf("Qual o valor do seu salario base: ");
    scanf("%f", &salarioBase);
    printf("Valor da quantidade de hora extra: ");
    scanf("%f", &quantidadeHE);
    printf("Qual o valor da hora extra: ");
    scanf("%f", &valorHE);
    printf("Qual o precentual de bonificação: ");
    scanf("%f", &percentualBonificacao);

    horaExtra = quantidadeHE * valorHE;
    bonificacao = salarioBase + (percentualBonificacao / 100);
    salarioFinal = salarioBase + horaExtra + bonificacao;
    printf("O valor do salario final e de %2fn\: ", salarioFinal);
    return 0;
}