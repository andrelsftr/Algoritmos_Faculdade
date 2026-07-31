#include <stdio.h>
#include <stdlib.h>

int main()
{
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, brancos = 0, nulos = 0, total_votos = 0, voto;

    do {
            printf("\n === MENU DE VOTACAO ===\n");
            printf("1 - Votar no candidato 1\n");
            printf("2 - Votar no candidato 2\n");
            printf("3 - Votar no candidato 3\n");
            printf("4 - Votar em branco\n");
            printf("Voto nulo (Qualquer outro valor)\n");
            printf("0 - Encerrar votacao\n");
            scanf("%d", &voto);



            if (voto != 0) {
        total_votos++;

        switch (voto){

        case 1:
            candidato1++;
            break;

        case 2:
            candidato2++;
            break;

        case 3:
            candidato3++;
            break;

        case 4:
            brancos++;
            break;

        default:
            nulos++;
            break;

            }
       }

    } while (voto != 0);

       if (candidato1 > candidato2 && candidato1 > candidato3)
       printf("Candidato 1 vencedor da eleicao!\n");

       else if (candidato2 > candidato1 && candidato2 > candidato3)
       printf("Candidato 2 vencedor da eleicao!\n");

       else if (candidato3 > candidato1 && candidato3 > candidato2)
       printf("Candidato 3 vencedor da eleicao!\n");

       else
       printf("Houve um empate tecnico, necessario segundo turno!\n");

       printf("\n=== RESULTADOS DA APURACAO ===\n");
       printf("O candidato 1 teve: %d votos\n", candidato1);
       printf("O candidato 2 teve: %d votos\n", candidato2);
       printf("O candidato 3 teve: %d votos\n", candidato3);
       printf("Votos em branco: %d\n", brancos);
       printf("Votos nulos: %d\n", nulos);
       printf("Total de eleitores: %d\n", total_votos);


    return 0;
}
