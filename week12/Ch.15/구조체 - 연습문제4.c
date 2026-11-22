#include <stdio.h>

struct person {
    char name[51];
    int score;
};

int main() {
    struct person people[5];
    struct person *p = &people[0];

    for(int i = 0; i < 5; i++) {
        scanf("%s %d",people[i].name,&people[i].score);
    }

    for(int i = 1; i < 5; i++) {
        if(people[i].score > p->score) p = &people[i];
    }

    printf("%s %d",p->name,p->score);

    return 0;
}