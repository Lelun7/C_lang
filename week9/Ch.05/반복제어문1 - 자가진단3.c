#include <stdio.h>

int main() {
    while(1) {
        int n;
        scanf("%d",&n);
        if(n>0) printf("positive number\n");
        else if(n<0) printf("negative number\n");
        else break;
    }
    return 0;
}