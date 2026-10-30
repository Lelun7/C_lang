#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i = 1; i <= 9; i++) {
        for(int j = a; (a<b ? j<=b : j>=b); (a<b ? j++ : j--)) printf("%d * %d =%3d   ",j,i,j*i);
        printf("\n");
    }
    return 0;
}