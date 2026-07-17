#include <stdio.h>
#include <stdlib.h>

int main()
{
    float distancia;
    float preco;
    float gasto_total;

    printf("Qual o valor do litro do combustivel? ");
    scanf("%f", &preco);

    printf("Quantos KM sera percorrido? ");
    scanf("%f", &distancia);

    gasto_total = ((distancia / 10) * preco);
    printf("Gasto total sera: R$%.2f ", gasto_total);


    return 0;
}
