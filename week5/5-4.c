#include <stdio.h>

int main() {
    int arr[3] = {0};
    int cnt[10] = {0};
    for(int i = 0; i < 3; i++) scanf("%d",&arr[i]);

    int pdt = arr[0] * arr[1] * arr[2];

    while(pdt!=0) {
        cnt[pdt%10]++;
        pdt/=10;
    }

    for(int i = 0; i < 10; i++) printf("%d : %d\n",i,cnt[i]);

    return 0;
}