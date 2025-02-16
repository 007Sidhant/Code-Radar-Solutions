#include<stdio.h>
int main(){
    int N,sum = 0;
    scanf("%d", &N);

    for (int i=1; i<=N; ++1){
        sum +=1;
    }
    printf("%d",sum);
    return 0;
}