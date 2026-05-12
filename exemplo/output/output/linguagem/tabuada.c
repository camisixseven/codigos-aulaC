#include <stdio.h>
int main() {
    int resultado = 0;
    int tabuada = 0;
printf("qual tabuada que deseja ver?");
scanf("%i", &tabuada);

//processamento

for (int i= 1; i < 10; i++)
 {
    resultado = tabuada * i;
    printf ("\n %i x %i = %i", tabuada, i, resultado);
}

    return 0;
}