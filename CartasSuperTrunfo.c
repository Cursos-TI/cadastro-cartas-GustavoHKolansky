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
  float populationDensity1, populationDensity2;
  float pib_per_capita1, pib_per_capita2;
  float superPower1, superPower2;

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

  printf("Informe o PIB em bilhões: ");
  scanf("%f", &pib1);

  printf("Informe a Quantidade de Pontos Turísticos: ");
  scanf("%d", &touristSpots1);

  //Calculo de densidade populacional
  populationDensity1 = population1 / area1;

  //Calculo de PIB per capita com conversão do PIB em bilhões
  pib_per_capita1 = (pib1 * 1000000000) / population1;

  //Calculo do Super poder
  superPower1 = (float)(population1 + area1 + pib1 + touristSpots1 + pib_per_capita1 + (1/populationDensity1));

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

  printf("Informe o PIB em bilhões: ");
  scanf("%f", &pib2);

  printf("Informe a Quantidade de Pontos Turísticos: ");
  scanf("%d", &touristSpots2);

  populationDensity2 = population2 / area2;
  pib_per_capita2 = (pib2 * 1000000000) / population2;
  superPower2 = (float)(population2 + area2 + pib2 + touristSpots2 + pib_per_capita2 + (1/populationDensity2));

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
  printf("Densidade Populacional: %.2f hab/km²\n",populationDensity1);
  printf("PIB per Capita: %.2f reais",pib_per_capita1);

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
  printf("Densidade Populacional: %.2f hab/km²\n",populationDensity2);
  printf("PIB per Capita: %.2f reais",pib_per_capita2);

  printf("\n\n"); //Printa 2 quebras de linha
  printf("\n=====================\n");

  //Exibe resultado final da comparação entre cartas
  printf("Comparação de Cartas:\n");
  printf("População: Carta %d venceu (%d)\n", (population1 > population2 ? 1 : 2), (population1 > population2));
  printf("Área: Carta %d venceu (%d)\n", (area1 > area2 ? 1 : 2), (area1 > area2));
  printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2 ? 1 : 2), (pib1 > pib2));
  printf("Pontos Turísticos: Carta %d venceu (%d)\n", (touristSpots1 > touristSpots2 ? 1 : 2), (touristSpots1 > touristSpots2));
  printf("Densidade Populacional: Carta %d venceu (%d)\n", (populationDensity1 < populationDensity2 ? 1 : 2), (populationDensity1 < populationDensity2));
  printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per_capita1 > pib_per_capita2 ? 1 : 2), (pib_per_capita1 > pib_per_capita2));
  printf("Super Poder: Carta %d venceu (%d)\n", (superPower1 > superPower2 ? 1 : 2), (superPower1 > superPower2));

  printf("\n\n\n");

  return 0;
} 
