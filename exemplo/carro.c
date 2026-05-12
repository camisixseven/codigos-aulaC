#include <stdio.h>

int main()  {
    // Entrada
    float valorCarro = 0;
    int qtdeParcelas = 0;
    const float entrada30 = 0.30;

    printf("qual valor do carro?");
    scanf("%f", &valorCarro);

    printf("quantas parcelas deseja pagar?");
    scanf("%i", &qtdeParcelas);

    // Processamento
    float entrada =(valorCarro * entrada30);
    float totalPagar =( valorCarro - entrada);
    float parcelas = (totalPagar / qtdeParcelas);
 

    // Saída 
    printf("o valor da entrada: %.2f\n", entrada);
    printf("o valor de parcelas: %.2f\n", parcelas);



    return 0;
}
