#include <stdio.h>

int main() {
    int n, matriz[9][9];
    scanf("%d", &n);

    for (int inst = 1; inst <= n; inst++) {
        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
                scanf("%d", &matriz[i][j]);

        int valido = 1;
        for (int i = 0; i < 9; i++) {
            int contador[10] = {0};
            for (int j = 0; j < 9; j++)
                contador[matriz[i][j]]++;
            for (int k = 1; k <= 9; k++)
                if (contador[k] != 1)
                    valido = 0;
        }
        for (int j = 0; j < 9; j++) {
            int contador[10] = {0};
            for (int i = 0; i < 9; i++)
                contador[matriz[i][j]]++;
            for (int k = 1; k <= 9; k++)
                if (contador[k] != 1)
                    valido = 0;
        }
        for (int bloco_i = 0; bloco_i < 3; bloco_i++) {
            for (int bloco_j = 0; bloco_j < 3; bloco_j++) {
                int contador[10] = {0};
                for (int i = bloco_i * 3; i < bloco_i * 3 + 3; i++) {
                    for (int j = bloco_j * 3; j < bloco_j * 3 + 3; j++) {
                        contador[matriz[i][j]]++;
                    }
                }
                for (int k = 1; k <= 9; k++)
                    if (contador[k] != 1)
                        valido = 0;
            }
        }
        printf("Instancia %d\n", inst);
        if (valido == 1)
            printf("SIM\n");
        else
            printf("NAO\n");
        printf("\n");
    }

    return 0;
}