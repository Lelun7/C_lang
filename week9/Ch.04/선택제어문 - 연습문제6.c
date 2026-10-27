#include <stdio.h>

int main() {
    int a[3];
    for(int i = 0; i < 3; i++) scanf("%d",&a[i]);
    int max = a[0];
    for(int i = 1; i < 3; i++) {
        if(a[i]>max) max=a[i];
    }
    printf("max = %d",max);
    return 0;
}