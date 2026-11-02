#include<stdio.h>

int main() {
    
    int opcao = 0;

    printf("Escolha entre 1 e 2:\n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Voce e um grande viado\n");
    }

    if (opcao == 2) {
        printf("Voce e um grande gay!\n");
    }

    return(0);
}