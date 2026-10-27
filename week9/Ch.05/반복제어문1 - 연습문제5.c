#include <stdio.h>

int main() {
    int max = 0, min = 101;
    while(1) {
        int n;
        scanf("%d",&n);
        if(n==0) break;
        if(n>0 && n < 101) {
            if(n>max) max = n;
            if(n<min) min = n;
        }
    }
    printf("MAX = %d\nMIN = %d",max,min);
    return 0;
}