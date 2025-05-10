#include <stdio.h>
 
int main() {

  int N; 
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        float n1, n2, n3;
        scanf("%f %f %f", &n1, &n2, &n3);
        float media = (n1 * 2 + n2 * 3 + n3 * 5) / 10.0;
        printf("%.1f\n", media);
    }
        
    return 0;
}