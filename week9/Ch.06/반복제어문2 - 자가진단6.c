#include <stdio.h>

int main() {
    int n,sum = 0;
    scanf("%d",&n);
    for(int i = 0; i < n; i++) {
        int temp;
        scanf("%d",&temp);
        sum+=temp;
    }
    float avg = (float)sum/n;
    printf("avg : %.1f\n",avg);
    if(avg >= 80) printf("pass");
    else printf("fail");
    return 0;
}