#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float s;

    printf("Informe seu salário: ");
    scanf("%f", &s);

    s < 500? printf("Seu novo salário é: %.2f", s*1.3): printf("Você não recebeu aumento no salário");

    return 0;
}
