#include <stdio.h>
#include "funcoes.h"

int main() {
    Produto prateleira[TAM];

    receberDadosPrateleira(prateleira, TAM);

    int opcao;
    do {
        printf("\nMenu:\n");
        printf("1. Calcular valor em estoque de um produto\n");
        printf("2. Calcular valor total em estoque\n");
        printf("3. Encontrar produto mais caro\n");
        printf("4. Encontrar produto mais barato\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                int codigo;
                printf("Digite o codigo do produto: ");
                scanf("%d", &codigo);
                for (int i = 0; i < TAM; i++) {
                    if (prateleira[i].codigo == codigo) {
                        float valor = calcularValorEstoqueProduto(prateleira[i]);
                        printf("Valor em estoque do produto %d: %.2f\n", codigo, valor);
                        break;
                    }
                }
                break;
            }
            case 2: {
                float valorTotal = calcularValorTotalEstoque(prateleira, TAM);
                printf("Valor total em estoque: %.2f\n", valorTotal);
                break;
            }
            case 3:
                encontrarProdutoMaisCaro(prateleira, TAM);
                break;
            case 4:
                encontrarProdutoMaisBarato(prateleira, TAM);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
