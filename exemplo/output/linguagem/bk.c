#include <stdio.h>

int  main(){
   
float valorLancheRodeio = 0;
float valorBatataGrande = 0;
float valorRefriCoca = 0;
float valorSobremessa = 0;

printf("qual o valor do lanche?");
scanf("%f", &valorLancheRodeio);

printf("qual o valor da batata?");
scanf("%f", &valorBatataGrande);

printf("qual o valor do refri?");
scanf("%f", &valorRefriCoca);

printf("qual o valor da sobremessa?");
scanf("%f", &valorSobremessa);

float total = valorLancheRodeio + valorBatataGrande +  valorRefriCoca + valorRefriCoca;
if (total < 40) {
    printf("O valor ficou barato R$ %.2f", total);
} else if (total >=40 && total <=55){
    printf("o valor ficou razoavel R$ %.2f", total);
}else if (total > 55) {
    printf("o valor ficou caro R$ %.2f", total);
}

    return 0;
}