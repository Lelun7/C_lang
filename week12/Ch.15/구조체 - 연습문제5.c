#include <stdio.h>

typedef struct person {
    char name[21];
    int height;
    float weight;
} Person;

int main() {
    Person people[5];
    Person temp;

    for(int i = 0; i < 5; i++) {
        scanf("%s %d %f",people[i].name,&people[i].height,&people[i].weight);
    }

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4 - i; j++) {
            if(people[j].height > people[j+1].height) {
                temp = people[j];
                people[j] = people[j+1];
                people[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < 5; i++) {
        printf("%s %d %.1f\n",people[i].name,people[i].height,people[i].weight);
    }

    return 0;
}