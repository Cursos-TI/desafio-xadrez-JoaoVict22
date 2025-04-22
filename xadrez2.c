#include <stdio.h>

void movertorre(int torre){
    if (torre > 0 )
    {
      printf("Direita\n");
      movertorre(torre - 1);
    }

}

void moverbispo(int bispo){
  if (bispo > 0 )
  {
    printf("cima, direita\n");
    moverbispo(bispo - 1);
  }

}

void moverRainha(int Rainha){
  if (Rainha > 0 )
  {
    printf("Esquerda\n");
    moverRainha(Rainha - 1);
  }

}

int main(){
  int casastorre;
  int casasbispo;
  int casasRainha;

  //torre
  printf("\ndigite o numero casas\n");
  scanf("%d", &casastorre);

  printf("torre\n");
  movertorre(casastorre);

  //bispo
  printf("\ndigite o numero casas\n");
  scanf("%d", &casasbispo);

  printf("bispo\n");
  moverbispo(casasbispo);

  //Rainha
  printf("\ndigite o numero casas\n");
  scanf("%d", &casasRainha);

  printf("Rainha\n");
  moverRainha(casasRainha);
  
  //cavalo
  printf("\ncavalo\n");
  for (int i = 0, j = 0; i < 1 && j < 1; i++, j++)
  {
    printf("cima\n");
    printf("cima\n");
    printf("direita\n");
  }

  //bispo
printf("\nbispo\n");
for (int i = 0; i < 5; i++)
{
  for (int j = 0; j < 5; j++)
  {
    printf("cima\n");
  }
  printf("direita\n");
}
  
  
}