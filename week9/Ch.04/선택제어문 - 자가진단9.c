#include <stdio.h>

int main() {
    int n[3];
    for(int i = 0; i < 3; i++) scanf("%d",&n[i]);
    int min = n[0];
    for(int i = 1; i < 3; i++) {
        if(min>n[i]) min = n[i];
    }
    printf("%d",min);
    return 0;
}