#include <stdio.h>

void a(int n) {
    if(n==1) {
        printf("%d\n",n);
    } else {
        a(n-1);
        printf("%d\n",n);
    }
    
}


int main() {
    int num;
    scanf("%d",&num);
    a(num);
}