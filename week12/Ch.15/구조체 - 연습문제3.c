#include <stdio.h>

struct person {
    char name[21];
    int age;
};

int main() {
    struct person people[3];
    for(int i = 0; i < 3; i++) {
        scanf("%s %d",people[i].name,&people[i].age);
    }

    for(int i = 0; i < 3; i++) {
        printf("Name : %s\nAge  : %d\n",people[i].name,people[i].age);
    }

    return 0;
}