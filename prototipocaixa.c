#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor;
    float saldo = 1000.00;
    int opcao;

    do {
            printf("1 - Saldo\n");
            printf("2 - Saque\n");
            printf("3 - Deposito\n");
            printf("0 - Sair\n");

            scanf("%d", &opcao);

    switch(opcao) {

    case 0:
        printf("Obrigado por utilizar nosso banco!\n");
        break;

    case 1:
        printf("Seu saldo e de: %.2f\n", saldo);
        break;

    case 2:
        printf("Qual o valor que deseja sacar?\n");
        scanf("%f", &valor);
        if ( valor <= saldo ) {
            saldo = saldo - valor;
            printf("Saque realizado com sucesso!\n");
            printf("Seu novo saldo e de: R$%.2f\n", saldo);

}

        else {
            printf("Erro: Saldo insuficiente para realizar o saque!\n");
            printf("Seu saldo atual e de apenas: R$%.2f\n", saldo);

}

        break;

    case 3:
        printf("Qual o valor que deseja depositar?\n");
        scanf("%f", &valor);
        saldo = ( saldo += valor );
        printf("Deposito relizado com sucesso!\n");
        printf("Seu novo saldo e de: R$%.2f\n", saldo);
        break;

}

}   while (opcao != 0);


    return 0;
}
