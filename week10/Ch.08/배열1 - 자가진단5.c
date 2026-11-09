#include <stdio.h>

int main() {
    int min = 1001;
    int arr[10];
    for(int i = 0; i < 10; i++) scanf("%d",&arr[i]);
    for(int i = 0; i < 10; i++) {
        if(min>arr[i]) min = arr[i];
    }
    printf("%d",min);
    return 0;
}