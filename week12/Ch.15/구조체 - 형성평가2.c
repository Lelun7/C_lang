#include <stdio.h>
#include <string.h>

struct person {
    char name[101];
    char number[101];
    char address[101];
};

int main() {
    struct person p[3];
    for(int i = 0; i < 3; i++) scanf("%s %s %s",p[i].name,p[i].number,p[i].address);

    struct person *ptr = &p[0];

    for(int i = 1; i < 3; i++) {
        if(strcmp(ptr->name,p[i].name) > 0) ptr = &p[i];
    }

    printf("name : %s\ntel : %s\naddr : %s",ptr->name,ptr->number,ptr->address);

    return 0;
}