#include<stdio.h>
int main(){
    int N,sum=0;
    scanf("%d", &N);

    for (int i=1; i<=N; ++1){
        sum = i+1;
    }
    printf("%d\n",N,sum);
    return 0;
}