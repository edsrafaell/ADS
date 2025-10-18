#include <stdio.h>

int main(){
    double lado, perimetro, area;
    printf("Qual o comprimento do lado: ");
    scanf("%lf", &lado);
    perimetro = lado*4;
    area = lado*lado;

    if (lado <=0)
    {
        printf("Quadrado inexistente!");
    }
    else{
        printf("Quadrado existente");
        printf("\nA area do quadrado e %.2f\n:", area);
        printf("O perimetro do quadrado e %.2f\n:", perimetro);
    }
    return 0;
}