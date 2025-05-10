#include <stdio.h>

int main() {
    int n, i, menor, posicao;
    int x[1000];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }
    menor = x[0];
    posicao = 0;

    for (i = 1; i < n; i++) {
        if (x[i] < menor) {
            menor = x[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}
