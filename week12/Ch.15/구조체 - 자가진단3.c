#include <stdio.h>

struct person {
    char name[31];
    int height;
};

int main() {
    struct person people[3];
    for(int i = 0; i < 3; i++) {
        scanf("%s %d",people[i].name,&people[i].height);
    }

    for(int i = 0; i < 3; i++) {
        printf("%s : %dcm\n",people[i].name,people[i].height);
    }

    return 0;
}