#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nome[10] = "camila";
    char logradouro[25] = "Rua terezinha beduschi petinelli";
    char bairro[10] = "monte rey 1";
    char cidade[10] = "piracicaba";
    char uf[2] = "SP";

    print("---Minhas informações residenciais---");
    print ("\nLogradouro: %s", logradouro);
    printf("\nBairro: %s", bairro);
    printf ("\nCidade: %s", cidade);
    printf("\nUf: %s", uf);






    return 0;
}
    