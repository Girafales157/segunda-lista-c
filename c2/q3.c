#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char a, s, d, f, g; //ASDFG

    printf("Insira o caracter #1: ");
    scanf("%s", &a);

    if (a == 'A' || a == 'a'){

        printf("\nInsira o caracter #2: ");
        scanf("%s", &s);

        if (s == 'S' || s == 's'){

            printf("\nInsira o caracter #3: ");
            scanf("%s", &d);

            if (d == 'D' || d == 'd'){

                printf("\nInsira o caracter #4: ");
                scanf("%s", &f);

                if (f == 'F' || f == 'f'){

                    printf("\nInsira o caracter #5: ");
                    scanf("%s", &g);

                    if (g == 'G' || g == 'g'){
                        printf("Senha correta.\n");
                    }
                    else {
                        printf("Senha incorreta.\n");
                    }
                }
                else {
                    printf("Senha incorreta.\n");
                }
            }
            else {
                printf("Senha incorreta.\n");
            }
        }
        else {
            printf("Senha incorreta.\n");
        }
    }
    else {
        printf("Senha incorreta.\n");
    }

    return 0;
}
