#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float s;

    printf("Informe seu sal�rio: ");
    scanf("%f", &s);

    s < 500? printf("Seu novo sal�rio �: %.2f", s*1.3): printf("Voc� n�o recebeu aumento no sal�rio");

    return 0;
}
