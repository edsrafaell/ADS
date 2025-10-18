#include <stdio.h>

int main (){
    float nota1,nota2, reavaliacao, media;
    printf("Digite o valor da nota 1: ");
    scanf("%f", &nota1);
    printf("Digite o valor da nota 2: ");
    scanf("%f", &nota2);
    printf("Qual  a onta da sua reavaliacao: ");
    scanf("%f", &reavaliacao);
    media = (nota1 + nota2 + reavaliacao ) / 3;
    printf("Sua media e %.2f\n: ", media);

    return 0 ;
}