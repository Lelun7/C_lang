#include <stdio.h>

int main() {
    int num;
    printf("양의 정수를 입력하세요: ");
    scanf("%d",&num);

    (num%2==0) ? printf("Even") : printf("Odd");

    return 0;
}