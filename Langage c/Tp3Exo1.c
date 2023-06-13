#include <stdio.h>

int main() {
    int entier = 32567;
    float nombre = 3.1415927;

    printf("Entier en hexadécimal : %X\n", entier);
    printf("Entier en octal : %o\n", entier);
    printf("Entier en non signé : %u\n", entier);

    printf("Flottant en format exponentiel : %e\n", nombre);
    printf("Flottant en format variable : %g\n", nombre );

    return 0;
}
