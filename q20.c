#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int a, b, c;
    float x1, x2, delta;

    printf("Equação de segundo grau:\n\tInsira o valor de 'a': ");
    scanf(" %i", &a);

    if (a == 0) {
        printf("\nO termo 'a' é negativo. Tente novamente.");
        return 0;
    }

    printf("\tAgora insira o valor de 'b': ");
    scanf(" %i", &b);

    printf("\tPor último, insira o valor de 'c': ");
    scanf(" %i", &c);

    printf("\n\n%ix² + %ix + %i = 0;", a, b, c);
    printf("\n\nΔ = b² - 4.a.c;\nΔ = %i² - 4.%i.%i;",b, a, c);
    delta = pow(b, 2) - (4*a*c); //Δ = b² - 4ac
    printf("\nΔ = %.1f;\n", delta);

    if (delta < 0) {
        printf("\n\nDelta é negativo. Tente novamente.");
        return 0;
    }

    printf("\nx' = (-b + √Δ) / 2a;\nx' = (-%i + √%.1f) / 2.%i;", b, delta, a);
    x1 = (-b + sqrt(delta)) / (2*a); //x' = (-b + √Δ) / 2a
    
    printf("\nx'' = (-b - √Δ) / 2a;\nx'' = (-%i - √%.1f) / 2.%i;\n", b, delta, a);
    x2 = (-b - sqrt(delta)) / (2*a); //x' = (-b - √Δ) / 2a

    printf("\nx' = %.1f;\nx'' = %.1f.", x1, x2);


    return 0;
}