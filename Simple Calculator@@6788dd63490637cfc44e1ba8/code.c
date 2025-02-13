#include <stdio.h>

int main() {
    char a;
    int num1, num2, result;

    // Prompt the user for input
    printf("");
    scanf("%d %d %c", &num1, &num2, &a);

    switch (a) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("error\n");
                return 1;
            }
            break;
        default:
            printf("error\n");
            return 1;
    }

    // Print the result
    printf("%d\n", result);

    return 0;
}
