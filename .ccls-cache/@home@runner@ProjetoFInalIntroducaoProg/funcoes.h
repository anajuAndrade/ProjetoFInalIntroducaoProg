#ifndef FUNCOES_H
#define FUNCOES_H

#define TAM 10

typedef struct {
    char nome[20];
    int codigo;
    int quantidade;
    float preco;
} Produto;

void receberDadosPrateleira(Produto vetor[], int tam);
float calcularValorEstoqueProduto(Produto produto);
float calcularValorTotalEstoque(Produto vetor[], int tam);
void encontrarProdutoMaisCaro(Produto vetor[], int tam);
void encontrarProdutoMaisBarato(Produto vetor[], int tam);

#endif