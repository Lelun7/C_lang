#include <stdio.h>

int main() {
    int a,b,sum = 0,cnt = 0,min,max;
    scanf("%d %d",&a,&b);
    if(a>b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }
    for(int i = min; i <= max; i++) {
        if(i%3==0 || i%5==0) {
            sum+=i;
            cnt++;
        }
    }
    printf("sum : %d\navg : %.1f",sum,(float)sum/cnt);
    return 0;
}