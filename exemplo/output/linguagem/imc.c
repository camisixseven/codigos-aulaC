#include <stdio.h>
int main()
{

    float peso = 0;
    float altura = 0;

    printf("qual e o seu peso?");
    scanf("%f", &peso);

    printf("qual e a sua altura?");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);

    if (imc >= 17.7 && imc <= 25.8)
    {
        printf("peso normal");
    }
    else if (imc >= 25.8 && imc <= 30.2)
    {
        printf("sobrepeso");
    }
    else if(imc >= 30.2)
    {
        printf("obesidade");
    }

    return 0;
}