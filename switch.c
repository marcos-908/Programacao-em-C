#include<stdio.h>

int main() {
    
    int opcao = 0;

    printf("Escolha entre 1 e 2:\n");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Voce e um grande viado\n");
            break;
        case 2:
            printf("Voce e um grande gay!\n");
            break;
        default:
            printf("Voce e burro!? Era entre 1 e 2!\n");
            break;
    }

    return (0);
}