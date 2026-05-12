#include <stdio.h> 
int main () {
    int nota = 0;
    printf("qual foi a sua nota?");
    scanf ("%i", &nota);

    if(nota >= 6.9) {
        printf ("voce esta aprovado");
        
    } else {
        printf ("voce nao esta aprovado");
    }
    return 0;


}