#include <stdio.h>

int main(){
    int idade;
    printf("Qual a sua idade: ");
    scanf("%d", &idade);

    if (idade >= 16)
    {
        printf("Voce esta apto a VOTAR");
    }
    else{
        printf("voce nao tem direito ao VOTO!");
    }
    return 0 ;
}