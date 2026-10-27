#include <stdio.h>

int main() {
    while(1) {
        int n;
        scanf("%d",&n);
        if(n==-1) break;
        else if(n%3==0) printf("%d\n",n/3);
    }
    return 0;
}