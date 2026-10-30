#include <stdio.h>

int main() {
    int a,b,min,max;
    scanf("%d %d",&a,&b);
    if(a>b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }
    for(int i = min; i <= max; i++) printf("%d ",i);
    return 0;
}