#include <stdio.h>
 
int main() {
 
int fat, n;

scanf("%d", &n);
for(fat = 1; n > 1; n = n - 1){
fat = fat * n;
}
printf("%d\n", fat);
 
    return 0;
}