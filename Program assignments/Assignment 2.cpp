//calculate the fine for library books
#include<stdio.h>
#include<math.h>
int main()
{
	int book_ID;
	int due_date;
	int return_date;
	printf("enter the book_ID:\n");
	scanf("%d", &book_ID);
	printf("enter the due_date:\n");
	scanf("%d", &due_date);
	printf("enter the return_date:\n");
	scanf("%d", &return_date);
	int over_due;
    over_due=return_date-due_date;
	printf("the days over_due:\n");
	printf("%d", over_due);
	
	int fine_amount;
	int fine_rate;}
	if(over_due<=7){
		fine_rate= over_due*20;
		fine_amount=fine_rate* over_due;
		printf("\n the fine_amount is %d\n", fine_amount);
		printf("\n the fine_rate is %d\n", fine_rate);}
		else if(days over_due<=14){
			fine_rate= over_due*50;
			fne_amount=fine_rate* over_due;
			printf("\n the fine_amount is %d\n", fine_amount);
			printf("\n the fine_rate is %d\n", fine_rate);} 
			else
				fine_rate= over_due*100;{
			fine_amount=fine_rate* over_due;
			print("\n the fine_rate is %d\n", fine_rate);
			printf("\n the fine_amount is %d\n", fine_amount);}}
			
			printf("\n the book_ID is %d", book_ID);
			printf("\n the due_date is %d", due_date);
			printf("\n the return_date is %d", return_date);
			printf("\n the days over_due is %d", over_due);
			printf("\n the fine_rate is %d", fine_rate);
			printf("\n the fine_amount is %d", fine_amount);
			
			return 0;
			
	
	
	
}