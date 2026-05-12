#include <stdio.h>

int main()
{
    printf("vamos calcular as notas dos alunos");

    int qtdeNotas = 0;
    double nota = 0;
    double totalNotas = 0;
    double mediaFinal = 0;

    printf("quantas notas deseja calcular?");
    scanf("%i, &qtdeNotas");

    for (int i = 0; i < qtdeNotas; i++)
    {
        printf("qual a nota do aluno");
        scanf("%f", &nota);

        // totalNotas += nota;
        totalNotas = totalNotas + nota;
    }

    mediaFinal = totalNotas / qtdeNotas;

    printf(" \n a media final é %.2f", mediaFinal);

    if (mediaFinal >= 6)
    {
        printf("\n aprovado");
    }
    else
    {
        printf("\n reprovado");
    }

    return 0;
}