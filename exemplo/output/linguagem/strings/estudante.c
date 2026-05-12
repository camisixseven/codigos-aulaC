#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nome[20];
    char escola[20];
    char curso[20];

    printf("qual o seu nome?");
    scanf(" %[^\n]", nome);

    printf("Qual o nome da sua escola?");
    scanf(" %[^\n]", escola);

    printf("qual o seu curso técnico?");
    scanf(" %[^\n]", curso);

    printf("\n--suas informações acadêmicas são--");
    printf("\nnome; %s", nome);
    printf("\nensino médio; %s", escola);
    printf("\nensino técnico: %s", curso);

    return 0;
}