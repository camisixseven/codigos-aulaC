/*
calcula o imc
de uma pessoa 
com valores 
fixos nas variáves
e moestre  o valor 
ao final 
*/

#include <stdio.h>

int main() {

// declaração de variáveis 
// entrada 
 int peso = 70;
 float altura = 1.75;

 // processamento 
 float imc = peso/ (altura * altura );

 // Saída
 printf("O imc e %f", imc);

  return 0;
}

