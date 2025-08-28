#include <stdio.h>

#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

// Função recursiva para o Bispo
void moverBispo(int passos)
{
  if (passos == 0)
    return;
  printf("Cima\n");
  printf("Direita\n");
  moverBispo(passos - 1);
}

// Função recursiva para a Torre
void moverTorre(int passos)
{
  if (passos == 0)
    return;
  printf("Direita\n");
  moverTorre(passos - 1);
}

// Função recursiva para a Rainha
void moverRainha(int passos)
{
  if (passos == 0)
    return;
  printf("Esquerda\n");
  moverRainha(passos - 1);
}

// Cavalo com múltiplas variáveis e controle de fluxo
void moverCavalo()
{
  for (int i = 0, j = 0; i < 2 || j < 1; i++, j++)
  {
    if (i < 2)
    {
      printf("Cima\n");
    }
    else
    {
      continue;
    }

    if (j < 1)
    {
      printf("Direita\n");
    }
    else
    {
      break;
    }
  }
}

int main()
{
  moverBispo(BISPO_MOV);
  moverTorre(TORRE_MOV);
  moverRainha(RAINHA_MOV);
  moverCavalo();
  return 0;
}
