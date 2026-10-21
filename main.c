
#include <stdio.h>

int main() {
    int linhas;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linhas);

    if (linhas <= 0 || linhas > 30) {
        printf("Digite um valor entre 1 e 30.\n");
        return 1;
    }

    for (int i = 0; i < linhas; i++) {
        int numero = 1;

        for (int espaco = 0; espaco < linhas - i - 1; espaco++) {
            printf(" ");
        }

        for (int j = 0; j <= i; j++) {
            printf("%d ", numero);
            numero = numero * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
