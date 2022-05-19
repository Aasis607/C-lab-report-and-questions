#include<stdio.h>
int main()
{
	int salary,tax;
	printf("Enter the salary",salary);
	scanf("%d",&salary);
	
	if(salary<=200000 && salary==500000)
	{
		printf("You   have to pay   5 percent tax");
	}
	else if (salary<=500000 && salary==1000000)
	{
		printf("You do not have to pay 20 percent tax");
	}
	else if(salary<=1000000)
	{
		printf("You have to pay   30 percent tax");
	}
	else
	{
		printf("You do not have to pay tax");
	}
	
return 0;
}
