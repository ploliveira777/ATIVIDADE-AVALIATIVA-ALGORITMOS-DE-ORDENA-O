
#include <stdio.h>
#include <string.h>

#define TOTAL 10

// Estrutura que representa um produto do supermercado.
typedef struct {
    char nome[40];
    float preco;
} Produto;

// Exibe os produtos e seus respectivos precos.
void mostrarProdutos(Produto produtos[], int tamanho) {
    int i;

    printf("\n%-25s %s\n", "PRODUTO", "PRECO (R$)");
    printf("---------------------------------------------\n");

    for (i = 0; i < tamanho; i++) {
        printf("%-25s R$ %8.2f\n",
               produtos[i].nome, produtos[i].preco);
    }
}

// Bubble Sort: compara elementos vizinhos e troca
// suas posicoes quando estao fora de ordem.
// A cada passagem, o maior preco restante vai para o final.
void bubbleSort(Produto produtos[], int tamanho) {
    int i, j;
    Produto temp;

    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - 1 - i; j++) {
            if (produtos[j].preco > produtos[j + 1].preco) {
                temp = produtos[j];
                produtos[j] = produtos[j + 1];
                produtos[j + 1] = temp;
            }
        }
    }
}

// Particiona o vetor usando o ultimo elemento como pivo.
// Os precos menores ou iguais ao pivo ficam a esquerda;
// os maiores ficam a direita.
int particionar(Produto produtos[], int inicio, int fim) {
    Produto pivo = produtos[fim];
    Produto temp;
    int i = inicio - 1;
    int j;

    for (j = inicio; j < fim; j++) {
        if (produtos[j].preco <= pivo.preco) {
            i++;

            temp = produtos[i];
            produtos[i] = produtos[j];
            produtos[j] = temp;
        }
    }

    // Coloca o pivo em sua posicao definitiva.
    temp = produtos[i + 1];
    produtos[i + 1] = produtos[fim];
    produtos[fim] = temp;

    return i + 1;
}

// Quick Sort: divide o vetor ao redor de um pivo
// e ordena recursivamente as duas partes.
void quickSort(Produto produtos[], int inicio, int fim) {
    if (inicio < fim) {
        int posicaoPivo = particionar(produtos, inicio, fim);

        quickSort(produtos, inicio, posicaoPivo - 1);
        quickSort(produtos, posicaoPivo + 1, fim);
    }
}

// Copia os dados originais para que os dois algoritmos
// trabalhem exatamente com os mesmos produtos.
void copiarProdutos(Produto destino[], Produto origem[]) {
    int i;

    for (i = 0; i < TOTAL; i++) {
        destino[i] = origem[i];
    }
}

int main(void) {
    // Conjunto original com 10 produtos e seus precos.
    Produto originais[TOTAL] = {
        {"Arroz 5 kg", 29.90},
        {"Feijao 1 kg", 8.50},
        {"Leite 1 L", 4.79},
        {"Cafe 500 g", 18.90},
        {"Acucar 1 kg", 4.29},
        {"Oleo 900 ml", 6.99},
        {"Macarrao 500 g", 3.99},
        {"Farinha 1 kg", 5.49},
        {"Biscoito", 3.49},
        {"Queijo 300 g", 14.90}
    };

    Produto bubble[TOTAL];
    Produto quick[TOTAL];
    int opcao;

    printf("====================================\n");
    printf(" ORDENACAO DE PRECOS DO SUPERMERCADO\n");
    printf("====================================\n");

    printf("\nProdutos antes da ordenacao:");
    mostrarProdutos(originais, TOTAL);

    printf("\nEscolha o algoritmo:\n");
    printf("1 - Bubble Sort\n");
    printf("2 - Quick Sort\n");
    printf("3 - Executar os dois algoritmos\n");
    printf("Opcao: ");

    if (scanf("%d", &opcao) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (opcao < 1 || opcao > 3) {
        printf("Opcao invalida!\n");
        return 1;
    }

    if (opcao == 1 || opcao == 3) {
        copiarProdutos(bubble, originais);
        bubbleSort(bubble, TOTAL);

        printf("\n--- Resultado do Bubble Sort ---\n");
        mostrarProdutos(bubble, TOTAL);
    }

    if (opcao == 2 || opcao == 3) {
        copiarProdutos(quick, originais);
        quickSort(quick, 0, TOTAL - 1);

        printf("\n--- Resultado do Quick Sort ---\n");
        mostrarProdutos(quick, TOTAL);
    }

    printf("\nOrdenacao concluida!\n");

    return 0;
}
