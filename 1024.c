#include <stdio.h>
 
int main() {
 
 int N;
    char linha[1001];

    scanf("%d", &N);
    getchar(); 

    while (N--) {
        fgets(linha, 1001, stdin);
        linha[strcspn(linha, "\n")] = '\0'; 

        int len = strlen(linha);

        for (int i = 0; i < len; i++) {
            if ((linha[i] >= 'A' && linha[i] <= 'Z') || (linha[i] >= 'a' && linha[i] <= 'z'))
                linha[i] += 3;
        }

        for (int i = 0; i < len / 2; i++) {
            char temp = linha[i];
            linha[i] = linha[len - 1 - i];
            linha[len - 1 - i] = temp;
        }

        for (int i = len / 2; i < len; i++) {
            linha[i] -= 1;
        }

        printf("%s\n", linha);
    }
 
    return 0;
}