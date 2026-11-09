#include <stdio.h>

int main() {
    int arr[10];
    for(int i = 0; i < 10; i++) scanf("%d",&arr[i]);
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < 10; i++) {
        if(i%2==1) sum1+=arr[i];
        else sum2+=arr[i];
    }
    printf("sum : %d\navg : %.1f",sum1,(float)sum2/5);

    return 0;
}