#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codcidade;
    char nomecidade[50];
    int populacao;
    float area;
    float pib;
    int numeropontosturistico;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite Codigo Cidade: %d\n");
    scanf ("%d",&codcidade);

    printf("Digite Nome Cidade: %s\n");
    scanf ("%s",&nomecidade);

    printf("Digite a População: %d\n");
    scanf ("%d",&populacao);
    
    printf("Digite a Area: %f\n");
    scanf ("%f",&area);

    printf("Digite o PIB: %f\n");
    scanf ("%f",&pib);

    printf("Digite o numero de pontos turisticos: %d\n");
    scanf ("%d",&numeropontosturistico);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Codigo Cidade: %d\n Nome Cidade: %s\n População: %d\n Area: %f\n PIB: %f\n Numero de Pontos Turisticos: %f\n",
     codcidade, nomecidade, populacao, area, pib, numeropontosturistico);


    return 0;
}
