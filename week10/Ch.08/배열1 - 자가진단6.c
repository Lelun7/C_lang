#include <stdio.h>

int main() {
    int arr[100];
    int cnt = 0;
    while(1) {
        scanf("%d",&arr[cnt]);
        if(arr[cnt]==0) break;
        cnt++;
    }
    int max = arr[0], min = arr[0];
    for(int i = 1; i < cnt; i++) {
        if(min>arr[i]) min = arr[i];
        if(arr[i]>max) max = arr[i];
    }

    printf("%d",max-min);
    return 0;
}