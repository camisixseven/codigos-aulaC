#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int km = 0;
    int dias = 0;
    char nome[30];
    char carro[30];
    float totalporkm = 0;
    float totalpordia = 0;
    const float VALOR_POR_KM = 1.25;
    const float VALOR_POR_DIA = 99.50;
    const char cupons[3][30] = {
        "CFS_10", "CFS_20", "CFS_30"};
    char cupomCliente[30];
    int temCupom = 0;
    float valorDesconto = 0;

    printf("ola seja bem vindo, qual seu nome?");
    scanf("%s", nome);

    printf("obrigada por escolher nossa loja, %s", nome);

    printf("\n%s, qual carro deseja alugar?", nome);
    scanf("%s", carro);

    printf("\nQuantos KMs com o %s você vai rodar com o carro?", carro);
    scanf("%i", &km);

    printf("Para mostrar um relatório detalhado diga quantos dias vai precisar do carro?");
    scanf("%i", &dias);

    printf("%s, tem cupom de desconto? 1 ->sim, 0 ->não", nome);
    scanf("%i", &temCupom);

    if (temCupom == 1)
    {
        printf("digite o código");
        scanf("%s", cupomCliente);
    }

    for (int i = 0; i < 3; i++)
    {

        if (strcmp(cupomCliente, "CFS_10") == 0)
        {
            valorDesconto = 10;
        }
        if (strcmp(cupomCliente, "CFS_20") == 0)
        {
            valorDesconto = 20;
        }
        if (strcmp(cupomCliente, "CFS_30") == 0)
        {
            valorDesconto = 30;
        }
    }

    totalporkm = (km * VALOR_POR_KM) - valorDesconto;

    totalpordia = (dias * VALOR_POR_DIA) - valorDesconto;

    printf("%s, segue um relatorio detalhado", nome);
    printf("\nTotal por KM R$ %.2f:", totalporkm);
    printf("\nTotal por dia: R$ %.2f", totalpordia);

    if (temCupom == 1)
    {
        printf("\nVocê teve desconto de R$ %.2f", valorDesconto);
    }

    if (totalpordia < totalporkm)
    {
        printf("\nSugerimos usar o plano por dia");
    }
    else
    {
        printf("\nSugerimos usar o plano por KM");
    }
    printf("\nTenha uma ótima tarde.");
    printf("\n Desenvolvido por Camila Fernandes");

    return 0;
}