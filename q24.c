#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int v1, v2, v3, temp;

    printf("Atribua os valores:\n");
    
    printf("\t#1: ");
    scanf("%i", &v1);
    
    printf("\t#2: ");
    scanf("%i", &v2);
    
    if (v2 < v1)
    {
        temp = v2;
        v2 = v1;
        v1 = temp;
    }
    
    printf("\t#3: ");
    scanf("%i", &v3);

    if (v3 < v2)
    {
        temp = v3;
        v3 = v2;
        v2 = temp;
    }
    
    if (v2 < v1)
    {
        temp = v2;
        v2 = v1;
        v1 = temp;
    }
    
    printf("\n\nExibição na ordem crescente: %i, %i, %i.", v1, v2, v3);

    return 0;
}
