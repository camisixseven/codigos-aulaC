#include <stdio.h>

int main()
{
    float valorCorte = 0;
    float valorHidratacao = 0;
    float valorLuzes = 0;
    float valorSobrancelha = 0;

    printf("qual o valor do corte?");
    scanf("%f", &valorCorte);

    printf("qual o valor da hidratacao?");
    scanf("%f", &valorHidratacao);

    printf("qual o valor das luzes?");
    scanf("%f", &valorLuzes);

    printf("qual o valor da sobrancelha?");
    scanf("%f", &valorSobrancelha);

    float total = valorCorte + valorHidratacao + valorLuzes + valorSobrancelha;
    if (total < 200)
    {
        printf("o valor ficou barato R$ %.2f", total);
    }
    else if (total >= 200 && total <= 300)
    {
        printf("o valor ficou razoavel R$ %.2f", total);
    }
    else if (total > 300)
    {
        printf("o valor ficou caro R$ %.2f", total);
    }

    return 
}