#include<stdio.h>
int main(){
	
	float basic_salary,HRA,DA,gross_salary;
	printf("Enter Your Salary: ");
	scanf("%f",&basic_salary);
	
	HRA=0.20*basic_salary;
	DA=0.40*basic_salary;
	
	gross_salary=basic_salary+HRA+DA;
	
	printf("Your HRA=%.2f\n",HRA);
		printf("Your DA=%.2f\n",DA);
		printf("Your Gross Salary=%.2f",gross_salary);
	
	return 0;
	
}
