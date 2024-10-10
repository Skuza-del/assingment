/*
Name: Otieno Samwel Amos
Reg no:CT101/G/21435/24
Date:3/10/2024
*/
//while loop - output values 1-30
#include<stdio.h>
int main ()
{
	
	int start =0; 
	int sum =0;
	int stop;
	while(stop <=50)
	{
		printf("enter the value to start : ");
		scanf("%d \n", start);
		printf("enter the value to stop : ");
		scanf("%d \n", stop);
		start++;
		sum= sum + start;
	}
	printf("the sum is %d", sum);
	return 0;
}