#include <stdio.h>

int main() {
    int months[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int n;
    while(1) {
        scanf("%d",&n);
        if(n<1 || n>12) break;
        printf("%d\n",months[n-1]);
    }
    return 0;
}