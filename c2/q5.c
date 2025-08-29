#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    float salario;

    printf("Informe seu salário: ");
    scanf("%f", &salario);

    salario > 300? printf("Salário: %.2f.\nSeu reajuste foi de 30%%.\n", salario*1.3): printf("Salário: %.2f.\nSeu reajuste foi de 50%%.\n", salario*1.5);

    return 0;
}
