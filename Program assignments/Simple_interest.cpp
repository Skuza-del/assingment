/*
Author:Otieno Samwel Amos
Reg no:CT101/G/21435/24
Date:29/9/2024
*/
#include<stdio.h>
#include<math.h>
int main()
{
	float principal_amount, time, rate, simple_interest;
	printf("enter the princial_amount : ");
	scanf("%f", &principal_amount);
	printf("enter the rate : ");
	scanf("%f", &rate);
	printf("enter the time : ");
	scanf("%f", &time);
//calculate the simple_interest;
    simple_interest=(principal_amount*rate*time)/100;
    printf("the simple_interest is %f", simple_interest);
    return 0;

}