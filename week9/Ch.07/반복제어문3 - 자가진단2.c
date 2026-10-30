#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n*2; i++) {
        for(int j = (i<n ? i : (n*2-1)-i); j < n; j++) printf("*");
        printf("\n");
    }
    return 0;
}