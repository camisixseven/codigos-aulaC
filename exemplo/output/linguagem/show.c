#include  <stdio.h>
#include <stdbool.h>


int main() {
    bool comprouIngressoAntes = false;
    bool comprouIngressoNaHora = false;
    int comprou = 0;

    printf("comrpou ingresso antes? 0 -> não, 1 -> sim");
    scanf("%d", &comprou);

    comprouIngressoAntes = comprou;

    printf("comrpou ingresso na hora? 0 -> não, 1 -> sim");
    scanf("%d", &comprou);

    comprouIngressoNaHora = comprou;

    if (comprouIngressoAntes|| comprouIngressoNaHora) {
        printf ("Vai assistir o show !!!");
    } else {
        printf("nao vai assistir o show");
    }
    return 0;
}