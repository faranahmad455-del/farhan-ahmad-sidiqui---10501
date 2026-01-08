#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {        // Outer loop (rows)
        for(int j = 1; j <= i; j++) {    // Inner loop (columns)
            printf("%d ", j);
        }
        printf("\n");                   // New line after each row
    }

    return 0;
}