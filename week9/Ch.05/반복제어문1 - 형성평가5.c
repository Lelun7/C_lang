#include <stdio.h>

int main() {
    while(1) {
        int a,b;
        scanf("%d %d",&a,&b);
        printf("Triangle area = %.1f\nContinue? ",(float)a*b/2);
        int c;
        scanf(" %c\n",&c);
        if(c=='Y' || c=='y') continue;
        else break;
    }
    return 0;
}