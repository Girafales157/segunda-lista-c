#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int formaPagamento;
    float valorProduto;

    printf("Valor do produto: ");
    scanf("%f", &valorProduto);
    printf("Forma de pagamento:\n1. À vista\n2. À vista (cartão de crédito)");
    printf("\n3. Parcelado em duas vezes sem juros\n4. Parcelado em três vezes com juros");
    printf("\n\nEscolha: ");
    scanf("%i", &formaPagamento);

    switch(formaPagamento)
    {
    case 1:
        printf("Valor a pagar: R$ %.2f (10%% de desconto).", valorProduto*0.9);
        break;
    case 2:
        printf("Valor a pagar: R$ %.2f (5%% de desconto).", valorProduto*0.95);
        break;
    case 3:
        printf("Valor a pagar por parcela: R$ %.2f.", valorProduto/2);
        break;
    case 4:
        printf("Valor a pagar por parcela: R$ %.2f (10%% de juros).", 1.1*(valorProduto/3));
        break;
    default:
        printf("Opção inválida. Tente novamente.");
    }

    return 0;
}