#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("");
    scanf("%d", &num1);
    printf("");
    scanf("%d", &num2);

    // Check if the first number is greater than the second
    if (num1 > num2) {
        printf("%d is greater than %d\n", num1, num2);
    } else if (num1 < num2) {
        printf("%d is less than %d\n", num1, num2);
    } else {
        printf("%d is equal to %d\n", num1, num2);
    }

    return 0;
}
