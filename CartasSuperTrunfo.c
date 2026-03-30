#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char state1, state2;
  char cardCode1[4], cardCode2[4];
  char city1[50], city2[50];
  int population1, population2;
  float area1, area2;
  float pib1, pib2;
  int touristSpots1, touristSpots2;

  // Área para entrada de dados
  printf("Vamos começar cadastrando 2 cartas\n");
  //CARD 1
  printf("\n--- CARTA 1 ---\n");
  printf("Informe o Estado (A-H): "); //Printa o comando do input aguardado
  scanf(" %c", &state1); //Aguarda o input do usuário e armazena na variável

  printf("Informe o Código: ");
  scanf("%s", cardCode1);

  printf("Informe a Cidade: ");
  scanf("%s", city1);

  printf("Informe a População: ");
  scanf("%d", &population1);

  printf("Informe a Área: ");
  scanf("%f", &area1);

  printf("Informe o PIB: ");
  scanf("%f", &pib1);

  printf("Informe a Quantidade de Pontos Turísticos: ");
  scanf("%d", &touristSpots1);

  //CARD 2
  printf("\n--- CARTA 2 ---\n");
  printf("Informe o Estado (A-H): ");
  scanf(" %c", &state2);

  printf("Informe o Código: ");
  scanf("%s", cardCode2);

  printf("Informe a Cidade: ");
  scanf("%s", city2);

  printf("Informe a População: ");
  scanf("%d", &population2);

  printf("Informe a Área: ");
  scanf("%f", &area2);

  printf("Informe o PIB: ");
  scanf("%f", &pib2);

  printf("Informe a Quantidade de Pontos Turísticos: ");
  scanf("%d", &touristSpots2);

  // Área para exibição dos dados da cidade
  // EXIBIÇÃO CARD 1
  printf("\n---------------------\n");
  printf("Carta 1:\n");
  printf("Estado: %c\n",state1);
  printf("Código: %s\n",cardCode1);
  printf("Nome da Cidade: %s\n",city1);
  printf("População: %d\n",population1);
  printf("Área: %.2f km²\n",area1);
  printf("PIB: %.2f bilhões de reais\n",pib1);
  printf("Número de Pontos Turísticos: %d\n",touristSpots1);

  // EXIBIÇÃO CARD 2
  printf("\n---------------------\n");
  printf("Carta 2:\n");
  printf("Estado: %c\n",state2);
  printf("Código: %s\n",cardCode2);
  printf("Nome da Cidade: %s\n",city2);
  printf("População: %d\n",population2);
  printf("Área: %.2f km²\n",area2);
  printf("PIB: %.2f bilhões de reais\n",pib2);
  printf("Número de Pontos Turísticos: %d\n",touristSpots2);

  printf("\n\n\n"); //Printa 3 quebras de linha

  return 0;
} 
