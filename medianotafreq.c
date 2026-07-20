#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3;
    float media;
    int frequencia;

    printf("Qual a primeira nota?\n");
    scanf("%f", &nota1);

    printf("Qual a segunda nota?\n");
    scanf("%f", &nota2);

    printf("Qual a terceira nota?\n");
    scanf("%f", &nota3);

    printf("E qual a frequencia do aluno?\n");
    scanf("%d", &frequencia);

    media = (nota1 + nota2 + nota3) / 3.0;

    if (media >= 9 && frequencia >= 90)
    printf("Aprovado com exelencia!\n");

    else if (media >= 7 && frequencia >= 75)
    printf("Aprovado!\n");

    else if (media >= 5 && frequencia >= 75)
    printf("Recuperacao!\n");

    else
    printf("Reprovado!\n");

    printf("Sua media final foi de: %.1f\n", media);
    printf("E sua frequencia foi de: %.1d\n", frequencia);


    return 0;
}
