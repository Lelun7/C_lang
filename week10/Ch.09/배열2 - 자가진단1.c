#include <stdio.h>

int main() {
    int arr[26] = {0};
    int n;
    while(1) {
        scanf(" %c",&n);
        if(n<65 || n>96) break;
        arr[n-65]++;
    }
    for(int i = 0; i < 26; i++) {
        if(arr[i]!=0) {
            printf("%c : %d\n",i+65,arr[i]);
        }
    }
    return 0;
}