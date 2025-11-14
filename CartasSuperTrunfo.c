#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
    // Repositório de dados para primeira carta:
    char estado1; //A
    char codigo1[8];  //A01
    char cidade1[20]; //FORTALEZA
    unsigned long int populacao1; //2500000
    float area1; //350KM²
    float pib1; //75000000000
    int pontosTuristicos1; //15(SUPOSIÇAO)
    double densidadePopulacional1;
    double PIBperCapita1;
    float superPoder1;

    // Recebimento, pelo usuário, de dados da primeira carta:
    printf("Vamos criar a primeira carta do nosso Super Trunfo!\n");
    printf("Uma letra de A a H que represente o estado:\n", estado1);
    scanf("%c", &estado1);
    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n", estado1);
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade referente ao estado escolhido: \n", cidade1);
    scanf("%s", &cidade1);
    printf("Digite a quantidade populacional dessa cidade: \n", populacao1);
    scanf("%lu", &populacao1);
    printf("Digite a área em Km² da cidade escolhida: \n", area1);
    scanf("%f", &area1);
    printf("Digite o PIB: \n", pib1);
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos da cidade escolhida: \n", pontosTuristicos1);
    scanf("%d", &pontosTuristicos1);

    
    //Calculos de densidade populacional e PIB per capita (carta 01)
    densidadePopulacional1 = (double) populacao1 / area1;
    PIBperCapita1 = (double) pib1 / populacao1;

    //adição de super poder da primeira carta.
    superPoder1 = (populacao1 + area1 + pib1 + pontosTuristicos1 + PIBperCapita1) - densidadePopulacional1;

    // Repositório de dados para segunda carta:
    char estado2; //B
    char codigo2[8]; //B02
    char cidade2[20]; //TERESINA
    unsigned long int populacao2; //900000
    float area2; //1400KM²
    float pib2; //23000000000
    int pontosTuristicos2; //20(SUPOSIÇÃO)
    float densidadePopulacional2;
    float PIBperCapita2;
    float superPoder2; //somando todos os atributos numéricos.

    // Recebimento, pelo usuário, de dados da primeira carta:
    printf("Vamos criar a segunda carta!\nDigite uma letra de A a H que represente o estado:\n", estado2);
    scanf(" %c", &estado2);
    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n", codigo2);
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade referente ao estado escolhido: \n", cidade2);
    scanf("%s", &cidade2);
    printf("Digite a quantidade populacional dessa cidade: \n", populacao2);
    scanf("%lu", &populacao2);
    printf("Digite a área em Km² da cidade escolhida: \n", area2);
    scanf("%f", &area2);
    printf("Digite o PIB: \n", pib2);
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos da cidade escolhida: \n", pontosTuristicos2);
    scanf("%d", &pontosTuristicos2);

    //Calculos de densidade populacional e PIB per capita (carta 01)
    densidadePopulacional2 = (float) populacao2 / area2;
    PIBperCapita2 = (float) pib2 / populacao2;

    //adição de super poder da segunda carta.
    superPoder2 = (populacao2 + area2 + pib2 + pontosTuristicos2 + PIBperCapita2) - densidadePopulacional2;


    // Amostra de primeira carta no terminal:
    printf("O estado: %c\n", estado1);
    printf("Codigo da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área (Km²): %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per capita:%.2f reais\n", PIBperCapita1);
    //adição do item "super poder"
    printf("Super poder: %.2f\n\n", superPoder1);

    // Amostra de segunda carta no terminal:
    printf("O estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área (Km²): %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per capita:%.2f reais\n", PIBperCapita2);
    //adição do item "super poder"
    printf("Super poder: %.2f\n\n", superPoder2);

    //comparar cartas:
    int resultadoPopulacao = populacao1 > populacao2;
    int resultadoArea = area1 > area2;
    int resultadoPIB = pib1 > pib2;
    int resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    int resultadoPIBperCapita = PIBperCapita1 > PIBperCapita2;
    int resultadoDensidadePopulacional = densidadePopulacional1 > densidadePopulacional2; 
    int resultadoSuperPoder = superPoder1 > superPoder2;

    //exibindo os resultados das comparações:

    printf("População: Carta 1 venceu!(%d)\n", resultadoPopulacao);  
    printf("Área: Carta 2 venceu!(%d)\n", resultadoArea);
    printf("PIB: Carta 1 venceu!(%d)\n", resultadoPIB); 
    printf("Pontos Turísticos: Carta 2 venceu!(%d)\n", resultadoPontosTuristicos);  
    printf("PIB per capita: Carta 1 venceu!(%d)\n", resultadoPIBperCapita);  
    printf("Densidade Populacional: Carta 2 venceu!(%d)\n", resultadoDensidadePopulacional); // ganha o menor valor
    printf("Super poder: carta 1 venceu! (%d)\n\n", resultadoSuperPoder); 

/*ENTREGA DO TERMINAL DEU:
População: Carta 1 venceu!(1)
Área: Carta 2 venceu!(0)
PIB: Carta 1 venceu!(1)
Pontos Turísticos: Carta 2 venceu!(0)
PIB per capita: Carta 1 venceu!(1)
Densidade Populacional: Carta 2 venceu!(1)
Super poder: carta 1 venceu! (1)*/

    return 0;
}
