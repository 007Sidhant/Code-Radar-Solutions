#include <stdio.h>

int main() {
    int num1, num2;
    printf("");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("True \n", num1, num2);
    } else {
        printf("False \n", num1, num2);
    }

    return 0;
}
