#include <stdio.h>
#include <string.h>

int main() {
    char s[51], v[51];
    int i, j = 0, p = 1;
    
    scanf("%s", s);

    for (i = 0; s[i]; i++)
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            v[j++] = s[i];
    v[j] = '\0';

    for (i = 0; i < j / 2; i++)
        if (v[i] != v[j - 1 - i])
            p = 0;
    
    printf("%c\n", p ? 'S' : 'N');
    return 0;
}