#include <stdio.h>
    int main() {
    // Entrada 
    float salario = 0;
    int tempo = 0;
    const float guardar25 =0;
    const float juros = 0.068;

    printf("qual e o salario?");
    scanf("%f",&salario  );


    printf("qual o tempo que deseja invenstir?");
    scanf("%i", &tempo );

    //Proceessamento
    float totalJurosPercentual= tempo * juros; //total de juros
    float salario25 = salario * guardar25; //25%do salario
    float totalDinheiro = tempo * salario25; //montante guardado
    float totalJurosValor = totalDinheiro * totalJurosPercentual; // total juros banco
    float totalcomJuros = totalJurosValor + totalDinheiro; // valor total


    //Saída
    printf("total juros em %.2f \n", totalJurosPercentual);
    printf("valor guardado sem juros R$ %.2f \n", totalDinheiro);
    printf("meses %i \n", tempo);
    printf("valor do juros do banco R$ %.2f\n", totalJurosValor);
    printf("valor guardado com juros R$ %.2f", totalcomJuros);
    
    return 0;

    }
