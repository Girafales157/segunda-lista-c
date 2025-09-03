#include <stdio.h>
#include <locale.h>

int main() {
    char resp;

    printf("O animal é mamifero? (s/n): ");
    scanf(" %c", &resp);

    if (resp == 's') {
        printf("É quadrupede? (s/n): ");
        scanf(" %c", &resp);
        if (resp == 's') {
            printf("É carnivoro? (s/n): ");
            scanf(" %c", &resp);
            if (resp == 's') {
                printf("O animal escolhido foi o leão.\n");
            } else {
                printf("Eh herbivoro? (s/n): ");
                scanf(" %c", &resp);
                if (resp == 's') {
                    printf("O animal escolhido foi o cavalo.\n");
                }
            }
        } else {
            printf("É bipede? (s/n): ");
            scanf(" %c", &resp);
            if (resp == 's') {
                printf("É onivoro? (s/n): ");
                scanf(" %c", &resp);
                if (resp == 's') {
                    printf("O animal escolhido foi o homem.\n");
                } else {
                    printf("O animal escolhido foi o macaco.\n");
                }
            } else {
                printf("É voador? (s/n): ");
                scanf(" %c", &resp);
                if (resp == 's') {
                    printf("O animal escolhido foi o morcego.\n");
                } else {
                    printf("O animal escolhido foi a baleia.\n");
                }
            }
        }
    } else {
        printf("É ave? (s/n): ");
        scanf(" %c", &resp);
        if (resp == 's') {
            printf("É voadora? (s/n): ");
            scanf(" %c", &resp);
            if (resp == 's') {
                printf("É de rapina? (s/n): ");
                scanf(" %c", &resp);
                if (resp == 's') {
                    printf("O animal escolhido foi a águia.\n");
                } else {
                    printf("O animal escolhido foi o pato.\n");
                }
            } else {
                printf("É aquatico? (s/n): ");
                scanf(" %c", &resp);
                if (resp == 's') {
                    printf("O animal escolhido foi o pinguim.\n");
                } else {
                    printf("O animal escolhido foi o avestruz.\n");
                }
            }
        } else {
            printf("É reptil? (s/n): ");
            scanf(" %c", &resp);
            if (resp == 's') {
                printf("Tem casco? (s/n): ");
                scanf(" %c", &resp);
                if (resp == 's') {
                    printf("O animal escolhido foi a tartaruga.\n");
                } else {
                    printf("Tem pernas? (s/n): ");
                    scanf(" %c", &resp);
                    if (resp == 's') {
                        printf("O animal escolhido foi o crocodilo.\n");
                    } else {
                        printf("O animal escolhido foi a cobra.\n");
                    }
                }
            } else {
                printf("Animal não encontrado na lista.\n");
            }
        }
    }

    return 0;
}
