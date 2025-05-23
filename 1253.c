#include <stdio.h>
 
int main() {
 
  int N;
    char texto[51]; 
    int deslocamento;

    scanf("%d", &N);
    while (N--) {
        scanf("%s", texto);
        scanf("%d", &deslocamento);

        int len = strlen(texto);
        for (int i = 0; i < len; i++) {
            texto[i] = ((texto[i] - 'A' - deslocamento + 26) % 26) + 'A';
        }

        printf("%s\n", texto);
    }
 
    return 0;
}