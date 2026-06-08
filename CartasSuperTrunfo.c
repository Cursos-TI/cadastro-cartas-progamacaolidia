#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[20];
  char codigo1[20];
  char cidade1[20];
  int populacao1;
  float area1;
  float pib1;
  int pontosturisticos1;
  float densidade1;
  float pibpercapita1;


  char estado2[20];
  char codigo2[20];
  char cidade2[20];
  int populacao2;
  float area2;
  float pib2;
  int pontosturisticos2;
  float densidade2;
  float pibpercapita2;


  // Área para entrada de dados
  printf("Digite dados da primeira carta:\n");

  printf("Digite o Estado da carta(de A a H): \n");
  scanf("%s",&estado1);

  printf("Digite o codigo da carta: \n");
  scanf("%s", codigo1);

  printf("Digite a cidade da carta: \n");
  scanf("%s", cidade1);

  printf("Digite a populaçao da carta: \n");
  scanf("%d", &populacao1);

  printf("Digite a area da carta: \n");
  scanf("%f", &area1);

  printf("Digite o PIB da carta: \n");
  scanf("%f", &pib1);

  printf("Digite a quantidade de pontos turisticos da carta: \n");
  scanf("%d", &pontosturisticos1);

  densidade1 = populacao1/area1;

  pibpercapita1 = pib1/populacao1;

  printf("\n");
  printf("Digite dados da segunda carta:\n");

  printf("Digite o Estado da carta: \n");
  scanf("%s", estado2);

  printf("Digite o codigo da carta: \n");
  scanf("%s", codigo2);

  printf("Digite a cidade da carta: \n");
  scanf("%s", cidade2);

  printf("Digite a populaçao da carta: \n");
  scanf("%d", &populacao2);

  printf("Digite a area da carta: \n");
  scanf("%f", &area2);

  printf("Digite o PIB da carta: \n");
  scanf("%f", &pib2);

  printf("Digite a quantidade de pontos turisticos da carta: \n");
  scanf("%d", &pontosturisticos2);

  densidade2 = populacao2/area2;

  pibpercapita2 = pib2/populacao2;

  // Área para exibição dos dados da cidade
  printf("Dados da primeira carta:\n");
  printf("Estado: %s\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Area: %.2f\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos Turisticos: %d\n", pontosturisticos1);
  printf("Densidade Populacional: %.2f \n", densidade1);
  printf("PIB per Capita: %.2f\n", pibpercapita1);


  printf("Dados da segunda carta:\n");
  printf("Estado: %s\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Area: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos Turisticos: %d\n", pontosturisticos2);
  printf("Densidade Populacional: %.2f\n", densidade2);
  printf("PIB per Capita: %.2f\n", pibpercapita2);

return 0;
} 
