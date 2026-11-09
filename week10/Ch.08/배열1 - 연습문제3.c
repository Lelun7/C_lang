#include <stdio.h>

int main() {
    int arr[100] = {0};
    int cnt = 0;
    for(int i = 0; i < 100; i++) {
        scanf("%d",&arr[i]);
        if(arr[i]==0) break;
        cnt++;
    }

    for(int i = 0; i < cnt; i++) {
        if(i%2!=0) printf("%d ",arr[i]);
    }
    return 0;
}