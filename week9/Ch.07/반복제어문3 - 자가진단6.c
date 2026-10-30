#include <stdio.h>

int main() {
    int n,en = 65, cnt = 1;
    scanf("%d",&n);
    for(int i = 0; i < n; i++) {
        for(int j = n-i; j > 0; j--) printf("%d ",cnt++);
        for(int j = 0; j <= i; j++) printf("%c ",en++);
        printf("\n");
    }
    return 0;
}