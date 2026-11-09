#include <stdio.h>

int main() {
    int arr[100];
    int cnt = 0;
    while(1) {
        scanf("%d",&arr[cnt]);
        if(arr[cnt]==0) break;
        cnt++;
    }
    int fcnt = 0, sum = 0;
    for(int i = 0; i < cnt; i++) {
        if(arr[i]%5==0) {
            fcnt++;
            sum+=arr[i];
        }
    }
    printf("Multiples of 5 : %d\nsum : %d\navg : %.1f",fcnt,sum,(float)sum/fcnt);
    return 0;
}