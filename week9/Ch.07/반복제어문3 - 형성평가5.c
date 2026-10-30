#include <stdio.h>

int main() {
    int n,en = 65, cnt = 0;
    scanf("%d",&n);
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) printf("%c ",en++);
        for(int j = 0; j < i; j++) printf("%d ",cnt++);
        printf("\n");
    }
    return 0;
}