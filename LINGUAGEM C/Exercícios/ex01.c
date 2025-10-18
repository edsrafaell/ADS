#include <stdio.h>
#include <locale.h>

int main(){
    
    float volume, comprimento, altura, largura;
    printf("Digite um valor do comprimento: ");
    scanf("%f", &comprimento);
    printf("Digite um valor da altura: ");
    scanf("%f", &altura);
    printf("Digite um valor da largura: ");
    scanf("%f", &largura);

    volume = comprimento * altura * largura;
    printf("O volume e de %.2f\n", volume);
}