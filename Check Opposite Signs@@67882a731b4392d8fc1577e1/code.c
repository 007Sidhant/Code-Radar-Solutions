#include <stdio.h>

int main() {
    int x, y;
    printf("");
    scanf("%d %d", &x, &y);
    if ((x ^ y) <= 0) {
        printf("True \n");
    } else {
        printf("False \n");
    }

    return 0;
}
