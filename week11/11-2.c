#include <stdio.h>
#include <stdlib.h>

struct Person {
	char name[50];
	int age;
};

int main() {
	struct Person* people;
	int i;

	people = (struct Person*)malloc(5 * sizeof(struct Person));

	if (people == '\0') {
		printf("Memory allocation failed.\n");
		return 1;
	}

	for(i = 0; i < 5; i++) {
		printf("Person %d:\n",i+1);

		printf("Enter name: ");
		scanf("%49s",people[i].name);

		printf("Enter age: ");
		scanf("%d",&people[i].age);
	}

	printf("\nPeople List:\n");
	for(i = 0; i < 5; i++) {
		printf("Person %d: Name = %d, Age = %d\n",i+1,people[i].name,people[i].age);
	}

	free(people);

	return 0;
}
