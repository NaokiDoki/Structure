#include<stdio.h>

struct employee{
	int employee_id;
	char name[30];
	char gender;
	float salary;
} em = {29,"Prasiddha Gurung", 'M', 10000.00};

int main(){
	printf("%d\n", em.employee_id);
	printf("%s\n", em.name);
	printf("%c\n", em.gender);
	printf("%.2f\n",em.salary);
	return 0;
}
