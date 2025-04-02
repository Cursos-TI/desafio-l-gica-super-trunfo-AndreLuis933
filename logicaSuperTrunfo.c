#include <stdio.h>

int main() {

  // Declaração de variáveis 1
  unsigned long int popupacao1;
  int pontos_turisticos1;
  float area1, pib1;
  char estado1;
  char codigo1[50], cidade1[50];

  // Entrada da carta 1
  printf("Digite os dados da Carta 1\n");
  printf("Digite o estado (somente a primeira letra): ");
  scanf(" %c", &estado1);
  printf("Digite o codigo da carta (ex: A01, B03): ");
  scanf("%s", codigo1);
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);
  printf("Digite a quantidade de habitantes: ");
  scanf("%lu", &popupacao1);
  printf("Digite a area em quilometros quadrados: ");
  scanf("%f", &area1);
  printf("Digite o pib: ");
  scanf("%f", &pib1);
  printf("Digite a quantidade de pontos turisticos: ");
  scanf("%d", &pontos_turisticos1);

  float densidade_populacional1 = (float)popupacao1 / area1;
  float pib_per_capita1 = (float)pib1 / popupacao1;
  // Usando inverso aditivo da densidade populacional para o Super Poder:
  float super_poder1 = (float)popupacao1 + area1 + pib1 + pontos_turisticos1 +
                       pib_per_capita1 - densidade_populacional1;

  // Declaração de variáveis 2
  unsigned long int popupacao2;
  int pontos_turisticos2;
  float area2, pib2;
  char estado2;
  char codigo2[50], cidade2[50];

  // Entrada da carta 2
  printf("\nDigite os dados da Carta 2\n");
  printf("Digite o estado (somente a primeira letra): ");
  scanf(" %c", &estado2);
  printf("Digite o codigo da carta (ex: A01, B03): ");
  scanf("%s", codigo2);
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);
  printf("Digite a quantidade de habitantes: ");
  scanf("%lu", &popupacao2);
  printf("Digite a area em quilometros quadrados: ");
  scanf("%f", &area2);
  printf("Digite o pib: ");
  scanf("%f", &pib2);
  printf("Digite a quantidade de pontos turisticos: ");
  scanf("%d", &pontos_turisticos2);

  float densidade_populacional2 = (float)popupacao2 / area2;
  float pib_per_capita2 = (float)pib2 / popupacao2;

  // Usando inverso aditivo da densidade populacional para o Super Poder:
  float super_poder2 = (float)popupacao2 + area2 + pib2 + pontos_turisticos2 +
                       pib_per_capita2 - densidade_populacional2;

  // Informaçoes da carta 1
  printf("\nCarta 1\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo da carta: %s\n", codigo1);
  printf("Nome da cidade: %s\n", cidade1);
  printf("Quantidade de habitantes: %lu\n", popupacao1);
  printf("Area: %.2fkm\n", area1);
  printf("Pib: %.2f bilhoes de reais\n", pib1);
  printf("Quantidade de pontos turisticos: %d\n", pontos_turisticos1);
  printf("Densidade Populacional: %.2f hab/km\n", densidade_populacional1);
  printf("PIB per capita: %.2f reais\n", pib_per_capita1);
  printf("Super poder: %.2f\n", super_poder1);

  // Informaçoes da carta 2
  printf("\nCarta 2\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo da carta: %s\n", codigo2);
  printf("Nome da cidade: %s\n", cidade2);
  printf("Quantidade de habitantes: %lu\n", popupacao2);
  printf("Area: %.2fkm\n", area2);
  printf("Pib: %.2f bilhoes de reais\n", pib2);
  printf("Quantidade de pontos turisticos: %d\n", pontos_turisticos2);
  printf("Densidade Populacional: %.2f hab/km\n", densidade_populacional2);
  printf("PIB per capita: %.2f reais\n", pib_per_capita2);
  printf("Super poder: %.2f\n", super_poder2);

  // escolha do atributo numerico para a comparacao
  int escolha1;

  printf("\nEscolha o atributo para a comparacao\n");
  printf("1 - Populacao\n");
  printf("2 - Area\n");
  printf("3 - PIB\n");
  printf("4 - Pontos turisticos\n");
  printf("5 - Densidade Populacional\n");
  printf("Escolha o atributo: ");
  scanf("%d", &escolha1);

  printf("Carta 1 cidade: %s e Carta 2 cidade: %s\n", cidade1, cidade2);

  // comparacao de cartas
  switch (escolha1) {
  case 1:
    printf("Atibuto utilizado para a comparacao: Populacao\n");
    printf("Carta 1 populacao: %lu e Carta 2 populacao: %lu\n", popupacao1,
           popupacao2);
    if (popupacao1 > popupacao2) {
      printf("Carta 1 ganhou\n");

    } else if (popupacao1 < popupacao2) {
      printf("Carta 2 ganhou\n");

    } else {
      printf("Empate!\n");
    }
    break;
  case 2:
    printf("Atibuto utilizado para a comparacao: Area\n");
    printf("Carta 1 area: %.2fkm e Carta 2 area: %.2fkm\n", area1, area2);
    if (area1 > area2) {
      printf("Carta 1 ganhou\n");

    } else if (area1 < area2) {
      printf("Carta 2 ganhou\n");

    } else {
      printf("Empate!\n");
    }
    break;
  case 3:
    printf("Atibuto utilizado para a comparacao: PIB\n");
    printf("Carta 1 pib: %.2f bilhoes de reais e Carta 2 pib: %.2f bilhoes de "
           "reais\n",
           pib1, pib2);
    if (pib1 > pib2) {
      printf("Carta 1 ganhou\n");

    } else if (pib1 < pib2) {
      printf("Carta 2 ganhou\n");

    } else {
      printf("Empate!\n");
    }
    break;
  case 4:
    printf("Atibuto utilizado para a comparacao: Pontos turisticos\n");
    printf("Carta 1 pontos turisticos: %d e Carta 2 pontos turisticos: %d\n",
           pontos_turisticos1, pontos_turisticos2);
    if (pontos_turisticos1 > pontos_turisticos2) {
      printf("Carta 1 ganhou\n");

    } else if (pontos_turisticos1 < pontos_turisticos2) {
      printf("Carta 2 ganhou\n");

    } else {
      printf("Empate!\n");
    }
    break;
  case 5:
    printf("Atibuto utilizado para a comparacao: Densidade Populacional\n");
    printf("Carta 1 densidade populacional: %.2f hab/km e Carta 2 densidade "
           "populacional: %.2f hab/km\n",
           densidade_populacional1, densidade_populacional2);
    if (densidade_populacional1 < densidade_populacional2) {
      printf("Carta 1 ganhou\n");

    } else if (densidade_populacional1 > densidade_populacional2) {
      printf("Carta 2 ganhou\n");

    } else {
      printf("Empate!\n");
    }
    break;
  default:
    printf("Opcao invalida\n");
    break;
  }

  return 0;
}