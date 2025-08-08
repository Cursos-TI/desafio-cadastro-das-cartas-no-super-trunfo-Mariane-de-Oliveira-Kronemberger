#include <stdio.h>

// Desafio Super Trunfo - Países | Tema 1 - Cadastro das Cartas
//Nível iniciante
//Mariane O. Kronemberger

int main() {

    // Var

    char estado1, estado2;
    char codigo1[6], codigo2[6];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int turistico1, turistico2;
    char continuar;

    // "Menu" do primeiro cadastro

    printf ("======== Cadastro de Cartas ========\n");
    printf ("------------------------------------\n");

    printf ("CARTA: 1\n");
    printf ("Digite o estado [A-H]:\n");
    scanf (" %c", &estado1);

    printf("Digite o código [ex: A01]:\n");
    scanf (" %s", codigo1);

    printf("Digite a cidade :\n");
    scanf(" %[^\n]", cidade1); // Lê com espaço

    printf("Digite a população: \n");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &PIB1);

    printf("Digite o número de pontos turísticos: \n");
    scanf (" %d", &turistico1);

    //estado, codigo, cidade, população, area, pib, turistico
      printf(" "); //Para "limpar" a tela)
      printf(" ");
      printf(" ");

    // Carta1 aparece

    printf ("CARTA 1\n");
    printf ("---------------------------\n");
    printf ("| Estado: %c\n", estado1);
    printf ("| Código: %s\n", codigo1);
    printf ("| CIdade: %s\n", cidade1);
    printf ("| População: %d\n", populacao1);
    printf ("| Área: %f Km²\n", area1);
    printf ("| PIB: %f\n", PIB1);
    printf ("| Pontos turísticos: %d\n", turistico1);
    printf ("---------------------------\n");
    printf ("\n[Aperte ENTER para continuar...]\n");
    scanf (" %c", &continuar);

      printf(" \n"); //Para "limpar" a tela)
      printf(" \n");
      printf(" \n");
      
    // "Menu" do segundo cadastro

    printf ("======== Cadastro de Cartas ========\n");
    printf ("------------------------------------\n");

    printf ("CARTA: 1\n");
    printf ("Digite o estado [A-H]:\n");
    scanf (" %c", &estado2);

    printf("Digite o código [ex: A01]:\n");
    scanf (" %s", codigo2);

    printf("Digite a cidade :\n");
    scanf(" %[^\n]", cidade2); // Lê com espaço

    printf("Digite a população: \n");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf (" %d", &turistico2);

    //estado, codigo, cidade, população, area, pib, turistico
      printf(" "); //Para "limpar" a tela)
      printf(" ");
      printf(" ");

    // Carta1 aparece

    printf ("CARTA 1\n");
    printf ("---------------------------\n");
    printf ("| Estado: %c\n", estado1);
    printf ("| Código: %s\n", codigo1);
    printf ("| CIdade: %s\n", cidade1);
    printf ("| População: %d\n", populacao1);
    printf ("| Área: %f Km²\n", area1);
    printf ("| PIB: %f\n", PIB1);
    printf ("| Pontos turísticos: %d\n", turistico1);
    printf ("---------------------------\n");
    printf ("\n[Aperte ENTER para continuar...]\n");
    
    return 0;
}

/*Carta 1:

Estado: A

Código: A01

Nome da Cidade: São Paulo

População: 12325000

Área: 1521.11 km²

PIB: 699.28 bilhões de reais

Número de Pontos Turísticos: 50*/