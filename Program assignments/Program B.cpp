/*
Author:Otieno Samwel Amos
Reg no:CT101/G/21435/24
Date:29/9/2024
*/
#include<stdio.h>
int main()
{
	char a ;
	char name ;
	int age ;
	float salary ;
	double budget ;
	printf("enter a character : ");
	scanf("%c", &a);
	printf("the character is %c \n", a);
	printf("enter your name : ");
	scanf("%s", &name);
	printf("the name is %s \n", name);
	printf("enter the age : ");
	scanf("%d", &age); 
	printf("the age is %d \n", age);
	printf("the budget is : ");
	scanf("%lf", &budget);
	printf("the budget is %f \n", budget);
	printf("enter the salary : ");
	scanf("%f", &salary);
	printf("the salary is %f \n", salary);
	return 0 ;
	
}