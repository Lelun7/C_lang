#include <stdio.h>

int main() {
    float arr[6];
    for(int i = 0; i < 6; i++) scanf("%f",&arr[i]);
    float sum = 0;
    for(int i = 0; i < 6; i++) sum+=arr[i];
    printf("%.1f",sum/6);
    return 0;
}