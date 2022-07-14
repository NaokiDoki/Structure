#include<stdio.h>

struct employee{
	int employee_id;
	char name[30];
	char gender;
	float salary;
};

int main(){
	struct employee em;
	printf("Ennter the id of employee:\n");
	scanf("%d%*c",&em.employee_id);
	
	printf("Enter the name of the employee:\n");
	gets(em.name);
	
	printf("enter the gender of employee:\n");
	scanf("%c", &em.gender);
	
	printf("Enter the salary of the employee:\n");
	scanf("%f%*c",&em.salary);
	
	printf("\n\nThe details of the Employee em is:\n");
	
	printf("\nEmployee id: %d", em.employee_id);
	
	printf("\nName of the employee: ");
	puts(em.name);
	
	printf("Gender of employee: %c\n", em.gender);
	
	printf("Salary of employee: %.2f", em.salary);
	
	return 0;
}
