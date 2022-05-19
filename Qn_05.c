#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the alphabet\n",ch);
	scanf("%c",&ch);
	
	if(ch<=122 && ch>=97)
	{
	
	printf("It is lowercase");
 }
else
{printf("It is not a lowercase");
	}	
	return 0;
}
