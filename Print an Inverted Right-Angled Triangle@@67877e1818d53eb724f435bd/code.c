#include <stdio.h>

int main() {
    int i, j, N;

    // Input number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &N);

    // Outer loop to handle the number of rows
    for (i = N; i >= 1; i--) {
        // Inner loop to handle the number of columns
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
