#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int grau;

    printf("Insira o valor do ângulo: ");
    scanf("%i", &grau);

    if (grau >= 0 && grau < 90)
        printf("1° quadrante.");
    if (grau >= 90 && grau < 180)
        printf("2° quadrante.");
    if (grau >= 180 && grau < 270)
        printf("3° quadrante.");
    if (grau >= 270 && grau < 360)
        printf("4° quadrante.");
    if (grau >= 360)
        printf("1° quadrante.");
    if (grau < 0 && grau > -90)
        printf("1° quadrante.");
    if (grau <= -90 && grau > -180)
        printf("2° quadrante.");
    if (grau <= -180 && grau > -270)
        printf("3° quadrante.");
    if (grau <= -270 && grau >= -360)
        printf("4° quadrante.");
    if (grau < -360)
        printf("1° quadrante.");

    return 0;
}