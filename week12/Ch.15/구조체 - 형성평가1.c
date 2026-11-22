#include <stdio.h>

struct person {
    char name[101];
    char number[101];
    char address[101];
};

int main() {
    struct person p;
    scanf("%s %s %s",p.name,p.number,p.address);

    printf("name : %s\ntel : %s\naddr : %s",p.name,p.number,p.address);

    return 0;
}