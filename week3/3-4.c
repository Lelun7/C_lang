#include <stdio.h>

int main() {
    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);

    int temp = num2;

    while(temp!=0) {
        printf("%d\n",(num1*(temp%10)));
        temp/=10;
    }

    printf("%d",num1*num2);

    return 0;
}