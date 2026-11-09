#include <stdio.h>

int main() {
    int n2,n1 = 100;
    scanf("%d",&n2);
    printf("%d %d ",n1,n2);
    while(1) {
        int temp = n1-n2;
        n1 = n2;
        n2 = temp;
        printf("%d ",n2);
        if(n2<0) break;
    }
}