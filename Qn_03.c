#include<stdio.h>
int main()
{
			int income,tax;
			printf("Enter you income=",income);
			scanf("%d",&income);

			if(income>=250000 && income<=500000){	
			tax= income-(0.05*income);
			printf("Your  net income %d",tax);
			}
			else if(income>=500000 && income<=1000000)
			{
				tax=income-(0.3*income);
				printf("Your net income is %d",tax);
			}
			else 
			{	printf("Your netcome remains same as you do not have to pay tax");
			}
	
	
	
	
	
return 0;	
}
