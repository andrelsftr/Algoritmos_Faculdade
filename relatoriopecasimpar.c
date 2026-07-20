#include <stdio.h>
#include <stdlib.h>

int main()
{
    int totalpecas;
    int i;

    printf("Qual foi o total de pecas fabricadas no lote?\n");
    scanf("%d", &totalpecas);

    for (i = 1; i <= totalpecas; i++) {
    if (i % 2 == 0) {
        continue;
}
    printf("Analisar peca numero: %d\n", i);

}





    return 0;
}
