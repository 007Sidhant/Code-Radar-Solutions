#include <stdio.h>

int main() {
    char a;
    int num1, num2;
    printf();
    scanf("%d %d %c", &num1,&num2,&a);

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
                printf("");
                return 1;
            }
    }



    return 0;
}
