#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int idade;

    printf("Informe sua idade: ");
    scanf("%i", &idade);

    idade > 17? printf("\nVoc� � maior de idade.\n"): printf("\nVoc� � menor de idade.\n");

    return 0;
}
