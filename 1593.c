#include <stdio.h>
#include <string.h>

int divide_por_dois(char *numero) {
    int i, temp = 0, novo_digito;
    int resto = 0;
    int len = strlen(numero);
    char resultado[1025];
    int pos = 0, leading_zero = 1;

    for (i = 0; i < len; i++) {
        temp = resto * 10 + (numero[i] - '0');
        novo_digito = temp / 2;
        resto = temp % 2;

        if (novo_digito != 0 || !leading_zero) {
            resultado[pos++] = novo_digito + '0';
            leading_zero = 0;
        }
    }

    if (pos == 0)
        resultado[pos++] = '0';

    resultado[pos] = '\0';
    strcpy(numero, resultado);

    return resto;
}

int contar_bits_1(char *numero) {
    int count = 0;
    while (!(strlen(numero) == 1 && numero[0] == '0')) {
        if (divide_por_dois(numero)) {
            count++;
        }
    }
    return count;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        char numero[1025];
        scanf("%s", numero);
        printf("%d\n", contar_bits_1(numero));
    }
    return 0;
}
