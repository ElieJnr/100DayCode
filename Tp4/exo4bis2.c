#include <stdio.h>
#include <math.h>

void resolveEquDeg1(float a, float b) {
    if (a == 0) {
        if (b == 0) {
            printf("L'equation est indeterminee. Elle admet une infinite de solutions.\n");
        } else {
            printf("L'equation est impossible. Elle n'admet pas de solution.\n");
        }
    } else {
        float X = -b / a;
        printf("La solution de l'equation est X = %f\n", X);
    }
}

float delta(float a, float b, float c) {
    return (b * b) - (4 * a * c);
}

void resolveEquDeg2(float a, float b, float c) {
    float d = delta(a, b, c);
    if (a == 0) {
        resolveEquDeg1(b, c);
    } else {
        if (d < 0) {
            printf("Cette equation n'admet pas de solution dans R.\n");
        } else if (d == 0) {
            float x0 = -b / (2 * a);
            printf("La solution de l'equation est X = %f\n", x0);
        } else {
            float x1 = (-b - sqrt(d)) / (2 * a);
            float x2 = (-b + sqrt(d)) / (2 * a);
            printf("Les solutions de l'equation sont X1 = %f et X2 = %f\n", x1, x2);
        }
    }
}

int main() {
    float a, b, c;
    printf("Entrez les coefficients a, b et c de l'equation (aX^2 + bX + c = 0) : ");
    scanf("%f %f %f", &a, &b, &c);
    
    printf("\n");
    resolveEquDeg2(a, b, c);
    
    return 0;
}
