#include <stdio.h>

int main() {
    int dia = 0;

    printf("qual dia da semana? 0->dom, 6->sab");
    scanf("%i",&dia);

    switch (dia) {
        case 1:
        printf("domingou!!!");
        break;
        case 2:
        printf("segundona, vamos pra cima");
        break;
        case 3:
        printf("terça, vamos!!");
        break;
        case 4:
        printf("quartou, meio da semana");
        break;
        case 5:
        printf("quintou, quase la");
        break;
        case 6:
        printf("sextou, ultimo dia!!");
        break;
        case 7:
        printf("sabadou,finalmente!!");
        break;
    } 
        return 0;
}