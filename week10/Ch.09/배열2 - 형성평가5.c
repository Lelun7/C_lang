#include <stdio.h>

int main() {
    int n;
    int su = 0;
    for(int i = 0; i < 4; i++) {
        int sum = 0;
        for(int j = 0; j < 3; j++) {
            scanf("%d",&n);
            sum += n;
        }
        printf("%d\n",sum);
        su+=sum;
    }
    printf("%d",su);
    return 0;
}