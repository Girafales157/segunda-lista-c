#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float p, cod;

    printf("Insira:\n\t# Preço do produto: "); //preço não é usado mas coloquei pq tá no enunciado
    scanf("%f", &p);

    printf("\tCódigo do produto: ");
    scanf("%f", &cod);

    if (cod == 1)
        printf("\nProduto oriundo da região Sul.");
    if (cod == 2)
        printf("\nProduto oriundo da região Norte.");
    if (cod == 3)
        printf("\nProduto oriundo da região Leste.");
    if (cod == 4)
        printf("\nProduto oriundo da região Oeste.");
    if (cod == 5 || cod == 6)
        printf("\nProduto oriundo da região Nordeste.");
    if (cod == 7.8 || cod == 9)
        printf("\nProduto oriundo da região Sudeste.");
    if (cod >= 10 && cod <= 20)
        printf("\nProduto oriundo da região Centro-Oeste.");
    if (cod >= 21 && cod <= 30)
        printf("\nProduto oriundo da região Nordeste.");

    printf("\n\n");

    return 0;
}