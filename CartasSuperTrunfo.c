#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char A[20];
  char A01[20];
  char CidadeA01[20];
  int PopulaçaoA01;
  float AreaA01;
  float PIBA01;
  int PontosturisticosA01;


  char B[20];
  char B02[20];
  char CidadeB02[20];
  int PopulaçaoB02;
  float AreaB02;
  float PIBB02;
  int PontosturisticosB02;

  // Área para entrada de dados
  printf("Digite dados da primeira carta:\n");

  printf("Digite o EstadoA: \n");
  scanf("%19s", A);

  printf("Digite o Codigo da cartaA: \n");
  scanf("%19s", A01);

  printf("Digite a CidadeA: \n");
  scanf("%19s", CidadeA01);

  printf("Digite a PopulaçaoA: \n");
  scanf("%d", &PopulaçaoA01);

  printf("Digite a AreaA: \n");
  scanf("%f", &AreaA01);

  printf("Digite o PIB A: \n");
  scanf("%f", &PIBA01);

  printf("Digite os Pontos TuristicosA: \n");
  scanf("%d", &PontosturisticosA01);


  printf("Digite dados da segunda carta:\n");

  printf("Digite o EstadoB: \n");
  scanf("%19s", B);

  printf("Digite o Codigo da cartaB: \n");
  scanf("%19s", B02);

  printf("Digite a CidadeB: \n");
  scanf("%19s", CidadeB02);

  printf("Digite a PopulaçaoB: \n");
  scanf("%d", &PopulaçaoB02);

  printf("Digite a AreaB: \n");
  scanf("%f", &AreaB02);

  printf("Digite o PIB B: \n");
  scanf("%f", &PIBB02);

  printf("Digite os Pontos TuristicosB: \n");
  scanf("%d", &PontosturisticosB02);


  // Área para exibição dos dados da cidade
  printf("EstadoA:, %s\n", A);
  printf("CodigoA:, %s\n", A01);
  printf("CidadeA:, %s\n", CidadeA01);
  printf("PopulaçaoA:, %d\n", PopulaçaoA01);
  printf("AreaA:, %.2f\n", AreaA01);
  printf("PIB A:, %.2f\n", PIBA01);
  printf("Pontos TuristicosA:, %d\n", PontosturisticosA01);


  printf("EstadoB:, %s\n", B);
  printf("CodigoB:, %s\n", B02);
  printf("CidadeB:, %s\n", CidadeB02);
  printf("PopulaçaoB:, %d\n", PopulaçaoB02);
  printf("AreaB:, %.2f\n", AreaB02);
  printf("PIB B:, %.2f\n", PIBB02);
  printf("Pontos TuristicosB:, %d\n", PontosturisticosB02);


return 0;
} 
