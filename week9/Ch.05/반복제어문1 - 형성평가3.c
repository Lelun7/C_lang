#include <stdio.h>

int main() {
    int sum = 0, cnt = 0;
    while(1) {
        int n;
        scanf("%d",&n);
        if(n>=0 && n<=100) {
            cnt++;
            sum+=n;
        } else break;
    }
    printf("sum : %d\navg : %.1f",sum,(float)sum/cnt);
    return 0;
}