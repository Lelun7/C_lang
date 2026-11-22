#include <stdio.h>
#include <string.h>

struct Score {
    char name[20];
    int kor;
    int eng;
};

struct Score plus(struct Score a, struct Score b){
    return (struct Score){"Total",a.kor+b.kor,a.eng+b.eng};
}

int main(){
    struct Score a, b;
    scanf("%s %d %d", a.name, &a.kor, &a.eng);
    scanf("%s %d %d", b.name, &b.kor, &b.eng);
    
    struct Score result = plus(a, b);
    
    printf("%s %d %d\n", a.name, a.kor, a.eng);
    printf("%s %d %d\n", b.name, b.kor, b.eng);
    printf("%s %d %d\n", result.name, result.kor, result.eng);
    
    return 0;
}