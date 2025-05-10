#include <stdio.h>
 
int main() {
 
int n;
scanf("%d", &n);

for(int i = 0; i < n; i++){
    int x, y;
    scanf("%d %d",&x, &y);
    int rafael = pow(3 * x, 2) + pow(y, 2);
    int beto = 2 * pow(x, 2) + pow(5 * y, 2);
    int carlos = -100 * x + pow(y, 3);
    
    if(rafael > beto && rafael > carlos){
        printf("Rafael ganhou\n");
    } else if (beto > carlos){
        printf("Beto ganhou\n");
    } else{
        printf("Carlos ganhou\n");
    }
}
 
    return 0;
}