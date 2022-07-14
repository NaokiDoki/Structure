//array of structure to read details of 4 employee and display it

#include<stdio.h>

struct employee{
	int employee_id;
	char name[30];
	char gender;
	float salary;
};

int main(){
	struct employee em[4];
	int i;
	
	//getting details of employee
	while(i<4){
		printf("\nEnter the details of the employee[%d]: \n", i);
		
		printf("Enter the id of the employee: ");
		scanf("%d%*c", &em[i].employee_id);
		
		printf("Enter the name of the employee: ");
		gets(em[i].name);
		
		printf("Enter the gender of the employee: ");
		scanf("%c", &em[i].gender);
		
		printf("Enter the salary of the employee: ");
		scanf("%f", &em[i].salary);
		
		i++;
	}
	
	//printing the details of the employee
	i = 0;
	while(i<4){
		
	printf("\nEmployee id : %d", em[i].employee_id);
	
	printf("\nEmployee name : %s", em[i].name);
	
	printf("\nGender : %c", em[i].gender);
	
	printf("\nSalary: RS %.2f\n", em[i].salary);
	
	i++;
	}
	return 0;
}
