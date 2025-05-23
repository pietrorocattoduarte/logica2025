#include <stdio.h>
 
int main() {
 
    int n, i;
    scanf("%d\n", &n);
    while (n--) {
        char linha[201];
        int freq[26] = {0};
        fgets(linha, 201, stdin);

        for (i = 0; linha[i]; i++) {
            if (isalpha(linha[i]))
                freq[tolower(linha[i]) - 'a']++;
        }

        int max = 0;
        for (i = 0; i < 26; i++)
            if (freq[i] > max) max = freq[i];

        for (i = 0; i < 26; i++)
            if (freq[i] == max)
                printf("%c", i + 'a');
        printf("\n");
    }
 
    return 0;
}