#include <stdio.h>

int main() {
    int odd = 0, even = 0;
    while(1) {
        int n;
        scanf("%d",&n);
        if(n==0) break;
        if(n%2==0) even++;
        else odd++;
    }
    printf("odd : %d\neven : %d",odd,even);
    return 0;
}