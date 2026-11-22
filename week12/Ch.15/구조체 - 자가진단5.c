#include <stdio.h>
#include <string.h>

typedef struct {
    char name[51];
    int height;
    float weight;
} person;

void swap(person *a, person *b) {
    person temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    person p[5];

    for(int i = 0; i < 5; i++) scanf("%s %d %f",p[i].name,&p[i].height,&p[i].weight);

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4 - i; j++) {
            if(strcmp(p[j].name,p[j+1].name) > 0) swap(&p[j],&p[j+1]);
        }
    }

    for(int i = 0; i < 5; i++) {
        printf("%s %d %.1f\n",p[i].name,p[i].height,p[i].weight);
    }

    return 0;
}