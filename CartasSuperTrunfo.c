#include <stdio.h>

// Desafio Super Trunfo - Países | Tema 1 - Cadastro das Cartas
//Nível iniciante
//Mariane O. Kronemberger

  // Função para limpar ENTER

void limpaBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}


int main() {

    // Var

    char estado1, estado2;
    char codigo1[6], codigo2[6];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int turistico1, turistico2;
    char tecla;

    // "Menu" do primeiro cadastro

    printf ("======== Cadastro de Cartas ========\n");
    printf ("------------------------------------\n");

    printf ("CARTA: 1\n");
    printf ("Digite o estado [A-H]:\n");
    scanf (" %c", &estado1);
    limpaBuffer();

    printf("Digite o código [ex: A01]:\n");
    scanf (" %s", codigo1);
    limpaBuffer();

    printf("Digite a cidade :\n");
    scanf(" %[^\n]", cidade1); // Lê com espaço
    limpaBuffer();

    printf("Digite a população: \n");
    scanf(" %lu", &populacao1);
    limpaBuffer();

    printf("Digite a área da cidade: \n");
    scanf(" %f", &area1);
    limpaBuffer();

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &PIB1);
    limpaBuffer();

    printf("Digite o número de pontos turísticos: \n");
    scanf (" %d", &turistico1);
    limpaBuffer();

    // "limpar" a tela)
    
      printf(" \n"); 
      printf(" \n");
      printf(" \n");

    // Carta 1 aparece

    printf ("CARTA 1\n");
    printf ("---------------------------\n");
    printf ("| Estado: %c\n", estado1);
    printf ("| Código: %s\n", codigo1);
    printf ("| Cidade: %s\n", cidade1);
    printf ("| População: %lu habitantes\n", populacao1);
    printf ("| Área: %.2f Km²\n", area1);
    printf ("| PIB: %.2f\n", PIB1);
    printf ("| Pontos turísticos: %d\n", turistico1);
    printf ("---------------------------\n");
    printf ("\n[Digite C para continuar...]\n");
    scanf (" %c", &tecla);
    limpaBuffer();

    // "limpar" a tela)

      printf(" \n"); 
      printf(" \n");
      printf(" \n");
      
    // "Menu" do segundo cadastro

    printf ("======== Cadastro de Cartas ========\n");
    printf ("------------------------------------\n");

    printf ("CARTA: 2\n");
    printf ("Digite o estado [A-H]:\n");
    scanf (" %c", &estado2);
    limpaBuffer();

    printf("Digite o código [ex: A01]:\n");
    scanf (" %s", codigo2);
    limpaBuffer();

    printf("Digite a cidade :\n");
    scanf(" %[^\n]", cidade2); // Lê com espaço
    limpaBuffer();

    printf("Digite a população: \n");
    scanf(" %lu", &populacao2);
    limpaBuffer();

    printf("Digite a área da cidade: \n");
    scanf(" %f", &area2);
    limpaBuffer();

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &PIB2);
    limpaBuffer();

    printf("Digite o número de pontos turísticos: \n");
    scanf (" %d", &turistico2);
    limpaBuffer();

    // "limpar" a tela)

      printf(" \n"); 
      printf(" \n");
      printf(" \n");

    // Carta 2 aparece

    printf ("CARTA 2\n");
    printf ("---------------------------\n");
    printf ("| Estado: %c\n", estado2);
    printf ("| Código: %s\n", codigo2);
    printf ("| Cidade: %s\n", cidade2);
    printf ("| População: %lu habitantes\n", populacao2);
    printf ("| Área: %.2f Km²\n", area2);
    printf ("| PIB: %.2f\n", PIB2);
    printf ("| Pontos turísticos: %d\n", turistico2);
    printf ("---------------------------\n");
    printf ("\n[Digite C para encerrar...]\n");
    scanf (" %c", &tecla);
    limpaBuffer();

    return 0;
}