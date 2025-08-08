#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
//Nível iniciante
//Mariane O. Kronemberger

int main() {

    //var

    char estado1, estado2[1];
    char codigo1, codigo2[5];
    char cidade1, cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int turistico1, turistico2;

    //"Menu" do primeiro cadastro

    printf ("======== Cadastro de Cartas ========\n");
    printf ("------------------------------------\n");

    printf ("CARTA: 1\n");
    printf ("Digite o o estado [A-H]:\n");
    scanf ("%c", &estado1);

    printf("Digite o código [ex: A01]:\n");
    scanf ("%s", &codigo1);

    printf("Digite a cidade :\n");
    scanf("%s", cidade1);

    printf("Digite a população: \n");
    scanf("%d", populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", area1);

    


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

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