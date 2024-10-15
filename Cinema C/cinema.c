#include <stdio.h>

#define PRECO_INGRESSO 30.50 // Definindo o preço base do ingresso

int main() {
    int opcao_filme, quantidade_ingressos;
    float valor_total = 0;

    // Exibindo as opções de filmes para o usuário
    printf("Escolha o filme:\n");
    printf("1: É assim que acaba\n");
    printf("2: Deadpool e Wolverine\n");
    printf("3: Divertidamente 2\n");
    printf("4: Armadilha\n");
    printf("Digite o número da sua opção: ");
    scanf("%d", &opcao_filme);

    // Verificando se a opção de filme é válida
    if(opcao_filme < 1 || opcao_filme > 4) {
        printf("Opção inválida!\n");
        return 1; // Saída do programa se a opção for inválida
    }

    // Solicitando a quantidade de ingressos
    printf("Digite a quantidade de ingressos: ");
    scanf("%d", &quantidade_ingressos);

    // Para cada ingresso, perguntamos a idade para calcular o valor
    for(int i = 0; i < quantidade_ingressos; i++) {
        int idade;
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade);

        // Verificando se a pessoa tem direito a meia entrada
        if(idade < 10 || idade > 65) {
            valor_total += PRECO_INGRESSO / 2; // Meia entrada
        } else {
            valor_total += PRECO_INGRESSO; // Ingresso completo
        }
    }

    // Exibindo o filme escolhido
    printf("\nFilme escolhido: ");
    switch(opcao_filme) {
        case 1:
            printf("É assim que acaba\n");
            break;
        case 2:
            printf("Deadpool e Wolverine\n");
            break;
        case 3:
            printf("Divertidamente 2\n");
            break;
        case 4:
            printf("Armadilha\n");
            break;
    }

    // Exibindo o valor total
    printf("Valor total da compra: R$ %.2f\n", valor_total);

    return 0; // Saída normal do programa
}