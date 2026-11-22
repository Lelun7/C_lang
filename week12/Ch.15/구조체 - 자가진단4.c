#include <stdio.h>

struct person {
    char name[21];
    int height;
};

int main() {
    struct person people[5];
    struct person *p = &people[0];

    for(int i = 0; i < 5; i++) {
        scanf("%s %d",people[i].name,&people[i].height);
    }

    for(int i = 1; i < 5; i++) {
        if(p->height > people[i].height) p = &people[i];
    }

    printf("%s %d",p->name,p->height);

    return 0;
}