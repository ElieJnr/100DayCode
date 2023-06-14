#include <stdio.h>
#include <math.h>

float resolveEquDeg1(float a, float b) {
    float X = 0;
    if (a == 0) {
        return X;
    } else {
        X = (-b) / a;
        return X;
    }
}

float delta(float a, float b, float c) {
    float delta = (b * b) - (4 * a * c);
    return delta;
}

void resolveEquDeg2(float a, float b, float c) {
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("L'equation est indeterminee. Elle admet une infinite de solutions.\n");
            } else {
                printf("L'equation est impossible. Elle n'admet pas de solution.\n");
            }
        } else {
            float x = -c / b;
            printf("La solution de l'equation est x = %f\n", x);
        }
    } else {
        float d = delta(a, b, c);
        if (d < 0) {
            printf("Cette equation n'admet pas de solution dans R.\n");
        } else if (d == 0) {
            float x0 = -b / (2 * a);
            printf("La solution de l'equation est x0 = %f\n", x0);
        } else {
            float x1 = (-b - sqrt(d)) / (2 * a);
            float x2 = (-b + sqrt(d)) / (2 * a);
            printf("Les solutions de l'equation sont x1 = %f et x2 = %f\n", x1, x2);
        }
    }
}

int main() {
    printf("X = %f\n", resolveEquDeg1(10, 5));
    printf("delta = %f\n", delta(4, 6, 2));
    resolveEquDeg2(1, -3, 2);
    return 0;
}
