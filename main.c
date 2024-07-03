#include "funcoes.h"
#include <stdio.h>

int main() {
    struct Prateleira prateleira[TAM];

    lerDados(prateleira, TAM);

    int opcao;
    do {
        printf("\n\n<---- Menu ---->\n");
        printf("1. Calcular valor em estoque de um produto.\n");
        printf("2. Calcular valor total em estoque.\n");
        printf("3. Encontrar produto mais caro.\n");
        printf("4. Encontrar produto mais barato.\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
               
            case 1: {
                
                int codigo;
                
                printf("Digite o codigo do produto: ");
                scanf("%d", &codigo);
                
                for (int i = 0; i < TAM; i++) {
                    if (prateleira[i].id == codigo) {
                        float valor = valorEstoqueProduto(prateleira[i]);
                        printf("O valor em estoque do produto %d é: R$%.2f\n", codigo, valor);
                        break;
                    }
                }
                
            break;
            }
            
            case 2: {
                
                float valorTotal = valorTotalEstoque(prateleira, TAM);
                
                printf("O valor total em estoque é: R$%.2f\n", valorTotal);
            
            break;
            }
            
            case 3:
                
                produtoMaisCaro(prateleira, TAM);
                
            break;
            
            case 4:
                
                produtoMaisBarato(prateleira, TAM);
                break;
            
            case 0:

                printf("Sistema finalizado.\n");
                
            break;
            
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
