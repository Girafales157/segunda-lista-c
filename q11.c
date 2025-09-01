#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    printf("Insira um número: ");
    scanf("%i", &n1);
    printf("Insira outro número: ");
    scanf("%i", &n2);
    
    printf("\nO número menor é ");
    n1 < n2? printf("%i.\n\n", n1): printf("%i.\n\n", n2);

    return 0;
}