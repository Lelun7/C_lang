#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int sum = 0;
    int i = 0;
    while(i<n) {
        i++;
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}