#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso;
    float altura;
    float resultado_imc;

    printf("Qual seu peso? (Ex de peso: 80) ");
    scanf("%f", &peso);

    printf("Qual a sua altura? (Ex de altura: 1.70) ");
    scanf("%f", &altura);

    resultado_imc = peso / (altura * altura);
    printf("Seu IMC e de: %.2f", resultado_imc);


    return 0;
}
