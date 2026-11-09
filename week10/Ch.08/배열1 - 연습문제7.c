#include <stdio.h>

int main() {
    int arr[10];
    for(int i = 0; i < 10; i++) scanf("%d",&arr[i]);
    int sum = 0;
    for(int i = 0; i < 10; i++) sum+=arr[i];
    float avg = (float)sum/10;
    printf("sum = %d\navg = %.1f",sum,avg);
    return 0;
}