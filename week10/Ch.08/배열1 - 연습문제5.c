#include <stdio.h>

int main() {
    int arr[100] = {0};
    int n;
    int max = -1;
    scanf("%d",&n);
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
        if(arr[i]>max) max = arr[i];
    }

    printf("%d",max);
    return 0;
}