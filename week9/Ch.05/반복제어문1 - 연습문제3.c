#include <stdio.h>

int main() {
    while(1) {
        int n;
        scanf("%d",&n);
        if(n>100 || n<0) break;
        if(n>=80) printf("Pass\n");
        else printf("Fail\n");
    }
    return 0;
}