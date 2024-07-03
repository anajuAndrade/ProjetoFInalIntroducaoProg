#include "funcoes.h"
#include <stdio.h>

void lerDados(struct Prateleira vetor[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("Digite os dados do produto %d:\n", i + 1);
        printf("Nome do Produto: ");
        scanf("%s", vetor[i].nomeProduto);
        printf("Código do Produto: ");
        scanf("%d", &vetor[i].id);
        printf("Quantidade em estoque: ");
        scanf("%d", &vetor[i].quantidade);
        printf("Valor: ");
        scanf("%f", &vetor[i].valor);
    }
}

float valorEstoqueProduto(struct Prateleira produto) {
    return produto.quantidade * produto.valor;
}

float valorTotalEstoque(struct Prateleira vetor[], int tam) {
    float total = 0;
    for (int i = 0; i < tam; i++) {
        total += valorEstoqueProduto(vetor[i]);
    }
    return total;
}

void produtoMaisCaro(struct Prateleira vetor[], int tam) {
    int maiorV = 0;
    for (int i = 1; i < tam; i++) {
        if (vetor[i].valor > vetor[maiorV].valor) {
            maiorV = i;
        }
    }
    printf("O produto mais caro é: %s.", vetor[maiorV].nomeProduto);
}

void produtoMaisBarato(struct Prateleira vetor[], int tam) {
    int menorV = 0;
    for (int i = 1; i < tam; i++) {
        if (vetor[i].valor < vetor[menorV].valor) {
            menorV = i;
        }
    }
    printf("O produto mais barato é: %s.", vetor[menorV].nomeProduto);
}

