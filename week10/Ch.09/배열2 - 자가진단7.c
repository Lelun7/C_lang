#include <stdio.h>

int main() {
    int arr[5][5] = {{1,1,1,1,1}};
    for(int i = 1; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(j==0) arr[i][j] = 1;
            else arr[i][j] = arr[i][j-1] + arr[i-1][j];
        }
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) printf("%d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}