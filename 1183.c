#include <stdio.h>

int main() {
    char T;
    double M[12][12], soma = 0;
    int contador = 0;

    scanf(" %c", &T);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    for (int i = 0; i < 12; i++) {
        for (int j = i + 1; j < 12; j++) {
            soma += M[i][j];
            contador++;
        }
    }

    if (T == 'S')
        printf("%.1lf\n", soma);
    else if (T == 'M')
        printf("%.1lf\n", soma / contador);

    return 0;
}