#include <stdio.h>

int main() {
    int arr[6] = {0};
    int temp;
    for(int i = 0; i < 10; i++) {
        scanf("%d",&temp);
        arr[temp-1]++;
    }
    
    for(int i = 0; i < 6; i++) {
        printf("%d : %d\n",(i+1),arr[i]);
    }

    return 0;
}