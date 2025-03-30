#include <stdio.h>
int main(){ // Inicio do Código
    char pais[50]; // Variaveis
    char paisB[50];
    int pop, pop2, turismo, turismo2;
    float area, area2, pib, pib2, densidade, densidade2, soma, soma2, soma3, soma4, resultadoA, resultadoB;
    char primeiroAtributo, segundoAtributo;
    int resultado1, resultado2;

    pop = 400; // Declaração de Números e Calculo de Densidade
    pop2 = 300;
    turismo = 40;
    turismo2 = 30;
    area = 1000.20;
    area2 = 2000.20;
    pib = 10000.10;
    pib2 = 20000.10;
    densidade = pop / area;
    densidade2 = pop2 / area2;

    printf("Digite o País da Carta 1:\n"); // Nomes dos Paises
    scanf("%s",pais);

    printf("Digite o País da Carta 2:\n");
    scanf("%s",paisB);

    printf("Escolha o Primeiro Atributo para Comparar:\n"); // Escolha de Atributo para comparar entre as duas cartas
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha a sua Opção:\n");
    scanf("%s",&primeiroAtributo);
    
    switch (primeiroAtributo) { // Switch do primeiro atributo 
    case '1':
        printf("Você escolheu o atributo População!\n"); //
        resultado1 = pop > pop2 ? 1 : 0; // Guardando o Resultado para resultado da rodada de comparação
        soma = pop; // Guardando o Atributo utilizado
        soma2 = pop2;
        break;
    case '2':
        printf("Você escolheu o atributo Área!\n");
        resultado1 = area > area2 ? 1 : 0;
        soma = area;
        soma2 = area2;
        break;
    case '3':
        printf("Você escolheu o atributo PIB!\n");
        resultado1 = pib > pib2 ? 1 : 0;
        soma = pib;
        soma2 = pib2;
        break;
    case '4':
        printf("Você escolheu o atributo Pontos Turisticos!\n");
        resultado1 = turismo > turismo2 ? 1 : 0;
        soma = turismo;
        soma2 = turismo2;
        break;
    case '5':
        printf("Você escolheu o atributo Densidade Geográfica!\n");
        resultado1 = densidade < densidade2 ? 1 : 0;
        soma = densidade;
        soma2 = densidade2;
        break;
    
    default:
    printf("Opção inválida, tente novamente.\n"); // Mensagem de opção inválida
        break;
    }

    printf("Escolha o Segundo Atributo para Comparar:\n"); // Switch do segundo atributo
    printf("Atenção: Escolha um atributo diferente da primeira escolha!\n"); // Observação para não escolher mesmo atributo do primeiro
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha a sua Opção:\n");
    scanf("%s",&segundoAtributo);
    if (primeiroAtributo = segundoAtributo)
    {
        printf("Você escolheu o mesmo atributo, tente novamente.\n");
    } else 
    switch (segundoAtributo) // Switch do Segundo Atributo
    {
        case '1':
        printf("Você escolheu o atributo População!\n");
        resultado2 = pop > pop2 ? 1 : 0; // Guardando o Resultado para resultado da rodada de comparação
        soma3 = pop; // Guardando o Atributo utilizado
        soma4 = pop2;
        break;
    case '2':
        printf("Você escolheu o atributo Área!\n");
        resultado2 = area > area2 ? 1 : 0;
        soma3 = area;
        soma4 = area2;
        break;
    case '3':
        printf("Você escolheu o atributo PIB!\n");
        resultado2 = pib > pib2 ? 1 : 0;
        soma3 = pib;
        soma4 = pib2;
        break;
    case '4':
        printf("Você escolheu o atributo Pontos Turisticos!\n");
        resultado2 = turismo > turismo2 ? 1 : 0;
        soma3 = turismo;
        soma4 = turismo2;
        break;
    case '5':
        printf("Você escolheu o atributo Densidade Geográfica!\n");
        resultado2 = densidade < densidade2 ? 1 : 0;
        soma3 = densidade;
        soma4 = densidade2;
        break;
    
    default:
    printf("Opção inválida, tente novamente.\n");
        break;
    }
    printf("Comparação de Atributos...\n"); // Demonstrando os atributos que vão ser comparados
    printf("%.2f VS %.2f\n",soma, soma2);
    printf("%.2f VS %.2f\n",soma3,soma4);

    if (resultado1 && resultado2) { // Resultado de comparação
        printf("Carta 1 (%s) venceu!\n",pais);
    } else if (resultado1 != resultado2) {
        printf("Empate!\n");
    } else {
        printf("Carta 2 (%s) venceu!\n",paisB);
    }
    printf("Soma dos Atributos...\n"); // Soma dos atributos
    resultadoA = soma + soma3;
    resultadoB = soma2 + soma4;

    if (resultadoA > resultadoB) { // Resultado da Soma dos Atributos
        printf("Carta 1 (%s) venceu a somatória! (%.2f VS %.2f)\n", pais, resultadoA, resultadoB);
    } else if (resultadoA == resultadoB) {
        printf("Empate entre os dois paises!"); 
     } else {
        printf("Carta 2 (%s) venceu a somatória! (%.2f VS %.2f)\n", paisB, resultadoA, resultadoB); 
    }

    return 0;
} // Fim do código