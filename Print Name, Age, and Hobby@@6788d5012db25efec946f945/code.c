#include <stdio.h>

int main() {
    char a[50], c[50];
    int b;
    printf("");
    scanf("%s", &a);
    scanf("%s", &c);
    scanf("%d", &b);
    printf("Name: %s", a);
    printf("Age: %d", b);
    printf("Hobby: %s", c);
    return 0;
}