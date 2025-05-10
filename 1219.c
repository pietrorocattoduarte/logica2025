#include <stdio.h>
#include <math.h>

int main() {
    #define PI 3.141592653589793
    double a, b, c;

    while (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        double p = (a + b + c) / 2;
        
        double area_triangulo = sqrt(p * (p - a) * (p - b) * (p - c));

        double raio_circuloR = area_triangulo / p;

        double area_rosas = PI * raio_circuloR * raio_circuloR;

        double area_violetas = area_triangulo - area_rosas;
        
        

        double raio_circuloS = (a * b * c) / (4 * area_triangulo);

        double area_circuloS = PI * raio_circuloS  * raio_circuloS ;

        double area_girassois = area_circuloS - area_triangulo;

        printf("%.4lf %.4lf %.4lf\n", area_girassois, area_violetas, area_rosas);
    }

    return 0;
}