#include <stdio.h>

struct person {
    char name[51];
    int age;
};

int main() {
    struct person me = {"Yejun",12};
    struct person friend;
    scanf("%s %d",friend.name,&friend.age);
    printf("Your name: %s, age: %d\n",me.name,me.age);
    printf("Friend's name: %s, age: %d",friend.name,friend.age);

    return 0;
}