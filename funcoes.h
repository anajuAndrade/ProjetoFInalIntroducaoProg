
#define TAM 10

struct Prateleira {
    char nomeProduto[20];
    int id;
    int quantidade;
    float valor;
};

void lerDados(struct Prateleira vetor[], int tam);
float valorEstoqueProduto(struct Prateleira produto);
float valorTotalEstoque(struct Prateleira vetor[], int tam);
void produtoMaisCaro(struct Prateleira vetor[], int tam);
void produtoMaisBarato(struct Prateleira vetor[], int tam);

