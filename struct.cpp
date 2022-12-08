#include<stdio.h>
#include<string.h>
struct person
{
	char name[50];
	int cityno;
	float salary;
} person1;
int main()
{
	struct person person1;
    person1.name,"lalith vaishnav"
	person1.cityno = 2002;
    person1.salary = 1;
    printf("name: %s\n",person1.name);
    printf("citizenship no: %d\n",person1.cityno);
    printf("salary: %2f",person1.salary);
return 0;
}
