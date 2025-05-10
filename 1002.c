#include <stdio.h>
 
int main() {
 
  double n = 3.14159;
  double A, raio;
 
  scanf("%lf", &raio);
  A = n * (raio * raio);
  printf("A=%.4f\n",A);
 
    return 0;
}