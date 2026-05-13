#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int km = 0;
    int dias= 0;
    char nome[30];
    float totalporkm = 0;
    float totalpordia = 0;
    const float VALOR_POR_KM = 1.25;
    const float VALOR_POR_DIA = 99.50;

    printf("ola seja bem vindo, qual seu nome?");
    scanf ("%s", nome);

    printf("obrigada por escolher nossa loja, %s", nome);

    printf("\nQuantos KMs você vai rodar com o carro?");
    scanf("%i", &km);

    printf("Para mostrar um relatório detalhado diga quantos dias vai precisar do carro?");
    scanf("%i", &dias);

    totalporkm = km * VALOR_POR_KM;
    totalpordia = dias * VALOR_POR_DIA;
    
    printf ("%s, segue um relatorio detalhado", nome );
    printf("\nTotal por KM R$ %.2f:", totalporkm);
    printf("\nTotal por dia: R$ %.2f", totalpordia);

    if (totalpordia < totalporkm) {
        printf("\nSugerimos usar o plano por dia");
    } else {
        printf ("\nSugerimos usar o plano por KM");
    }
    printf("\nTenha uma ótima tarde.");
    
    


    return 0;
} 