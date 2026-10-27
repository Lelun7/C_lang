#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int result = a-b;
    if(result<0) result*=-1;
    printf("%d",result);
    return 0;
}