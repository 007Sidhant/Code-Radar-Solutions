#include <stdio.h>

int main() {
    char a[50], c[50];
    int b;
    printf("");
    scanf("%s", &a);
    scanf("%s", &c);
    scanf("%d", &b);
    printf("Name: %s\n", a);
    printf("Age: %d\n", b);
    printf("Hobby: %s\n", c);
    return 0;
}