#include <stdio.h>

int main() {
    int n,en = 65;
    scanf("%d",&n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-i; j++) {
            printf("%c",en);
            en++;
        }
        printf("\n");
    }
    return 0;
}