#include <stdio.h>

int main(){
    int torre = 1;
    int bispo = 1;
    int rainha = 1;
    int cavalobaixo = 1, cavaloesquerda;

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
    
    printf("\ncavalo\n");

    for (cavaloesquerda = 1; cavaloesquerda <= 1; cavaloesquerda++)
    {
        while (cavalobaixo <= 2)
        {
            printf("baixo\n");
            cavalobaixo++;
        }
        printf("esquerda\n");
    }
    
    
    
}