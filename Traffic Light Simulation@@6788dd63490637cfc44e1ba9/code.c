#include<stdio.h>
int main(){
    char word;
    scanf("%c", &word);
    switch(word){
        case 'R':
            printf("Stop\n");
            break;
        case 'G':
            printf("Go \n");
            break;
        case 'Y':
            printf("Slow Down \n");
            break;
        default:
            printf("Invalid input \n");

    }
    return 0;
}