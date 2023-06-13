#include <stdio.h>

int main() {
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        for (int c = 1; c <= (n - i); c++)
            printf("  ");
        
        for (int j = 1; j <= i; j++) 
        {
            int k = i * i;
            printf("%2d ", k);
        }
        printf("\n");
    }
    return 0;
}
