#include <stdio.h>

int main() {
    int cnt=0;
    while(1) {
        int n;
        scanf("%d",&n);
        if(n==0) break;
        if(n%3!=0 && n%5!=0) cnt++;
    }
    printf("%d",cnt);
    return 0;
}