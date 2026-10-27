#include <stdio.h>

int main() {
    int small = 0,large = 0;
    while(1) {
        int n;
        scanf("%d",&n);
        if(n>=50) large++;
        else small++;
        if(n>=100) break;
    }
    printf("small : %d\nlarge : %d",small,large);
    return 0;
}