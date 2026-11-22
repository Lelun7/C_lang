#include <stdio.h>

struct info {
    char name[21];
    char school[21];
    int grade;
};

int main() {
    struct info info;
    scanf("%s %s %d",info.name,info.school,&info.grade);
    printf("Name : %s\nSchool : %s\nGrade : %d",info.name,info.school,info.grade);
    return 0;
}