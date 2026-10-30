#include <stdio.h>

int main() {
    int cnt = 1, en = 97, n=4;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) printf("%c ",en++);
        for(int j = n-i; j > 0; j--) printf("%d ",cnt++);
        printf("\n");
    }
    return 0;
}