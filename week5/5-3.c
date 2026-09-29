#include <stdio.h>

int main() {
    int arr[11] = {0};
    int temp;

    while(1) {
        scanf("%d",&temp);
        if(temp==0) break;
        arr[temp/10]++;
    }

    for(int i = 10; i >=0; i--) {
        if(arr[i]==0) continue;
        printf("%d : %d\n",i*10,arr[i]);
    }

    return 0;
}