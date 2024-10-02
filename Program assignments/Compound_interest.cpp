/*
Author:Otieno Samwel Amos
Reg no:CT101/G/21435/24
Date:29/09/2024
*/
#include<stdio.h>
#include<math.h>
int main()
{
	float principal_amount, rate, time, n;
	printf("enter the principal_amount : ");
	scanf("%f", &principal_amount);
	printf("enter the rate : ");
	scanf("%f", &rate);
	printf("enter the time : ");
	scanf("%f", &time);
	printf("enter the value of n : ");
	scanf("%f", &n);
//calculate the compound_interest
    double interest= principal_amount*pow((1+(rate/(100*n))),n*time)-principal_amount;
	printf("interest %lf", interest);
	return 0;
	
}