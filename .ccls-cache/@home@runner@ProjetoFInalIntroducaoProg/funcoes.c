#include <stdio.h>
#include "funcoes.h"

void receberDadosPrateleira(Produto vetor[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("Digite os dados do produto %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", vetor[i].nome);
        printf("Código: ");
        scanf("%d", &vetor[i].codigo);
        printf("Quantidade em estoque: ");
        scanf("%d", &vetor[i].quantidade);
        printf("Preço: ");
        scanf("%f", &vetor[i].preco);
    }
}

float calcularValorEstoqueProduto(Produto produto) {
    return produto.quantidade * produto.preco;
}

float calcularValorTotalEstoque(Produto vetor[], int tam) {
    float total = 0;
    for (int i = 0; i < tam; i++) {
        total += calcularValorEstoqueProduto(vetor[i]);
    }
    return total;
}

void encontrarProdutoMaisCaro(Produto vetor[], int tam) {
    int indexMaisCaro = 0;
    for (int i = 1; i < tam; i++) {
        if (vetor[i].preco > vetor[indexMaisCaro].preco) {
            indexMaisCaro = i;
        }
    }
    printf("Produto mais caro:\nNome: %s\nCódigo: %d\nQuantidade: %d\nPreço: %.2f\n",
           vetor[indexMaisCaro].nome, vetor[indexMaisCaro].codigo, vetor[indexMaisCaro].quantidade, vetor[indexMaisCaro].preco);
}

void encontrarProdutoMaisBarato(Produto vetor[], int tam) {
    int indexMaisBarato = 0;
    for (int i = 1; i < tam; i++) {
        if (vetor[i].preco < vetor[indexMaisBarato].preco) {
            indexMaisBarato = i;
        }
    }
    printf("Produto mais barato:\nNome: %s\nCódigo: %d\nQuantidade: %d\nPreço: %.2f\n",
           vetor[indexMaisBarato].nome, vetor[indexMaisBarato].codigo, vetor[indexMaisBarato].quantidade, vetor[indexMaisBarato].preco);
}

