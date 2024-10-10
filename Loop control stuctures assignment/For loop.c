/*
Name:Otieno Samwel Amos
Reg no:CT101/G/21435/24
Date:3/10/2024
*/
//for loop - output numbers 1-30
#include<stdio.h>
int main()
{
	int start =1, sum =0, stop=30;
	for(start =1; stop <=30; start++)
	{
		printf("enter a value to start : ");
		scanf("%d \n", start);
		printf("enter a value to stop : ");
		scanf("%d \n", stop);
		sum=sum + start;
	}
	printf("the sum is %d ", sum);
	return 0;	
		
	
}