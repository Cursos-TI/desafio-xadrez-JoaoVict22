#include <stdio.h>

int main(){
    int torre = 1;
    int bispo = 1;
    int rainha = 1;

    printf("\ntorre\n");

    while (torre <= 5)
    {
        printf("direita\n");
        torre++;
    }

    printf("\nbispo\n");

    do
    {
        printf("cima, direita\n");
        bispo++;
    } while (bispo <= 5);

    printf("\nRainha\n");

    for (rainha = 0; rainha <= 8; rainha++)
    {
        printf("Esquerda\n");
    }
    

    
    
}
