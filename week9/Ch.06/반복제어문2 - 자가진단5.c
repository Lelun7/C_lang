#include <stdio.h>

int main() {
    int tcnt = 0, fcnt = 0;
    for(int i = 0; i < 10; i++) {
        int n;
        scanf("%d",&n);
        if(n%3==0) tcnt++;
        if(n%5==0) fcnt++;
    }
    printf("Multiples of 3 : %d\nMultiples of 5 : %d",tcnt,fcnt);
    return 0;
}