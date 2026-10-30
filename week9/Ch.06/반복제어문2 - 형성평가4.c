#include <stdio.h>

int main() {
    int n,input,sum = 0;
    scanf("%d",&n);
    for(int i = 0; i < n; i++) {
        scanf("%d",&input);
        sum += input;
    }
    printf("%.2f",(float)sum/n);
    return 0;
}