#include <stdio.h>

int main() {
    int cnt = 0, sum = 0;
    while(1) {
        int n;
        scanf("%d",&n);
        if(n==0) break;
        else {
            cnt++;
            sum+=n;
        }
    }
    printf("cnt = %d\nsum = %d\navg = %.2f",cnt,sum,((float)sum/cnt));
    return 0;
}