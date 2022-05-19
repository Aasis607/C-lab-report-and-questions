#include<stdio.h>
int main()
{
			int rating;
			
			printf("Enter your raitngs from 1-5=",rating);
			scanf(" %d",&rating);
			
			switch(rating){
			
			case 1:{
				
			
				printf("You're rating is 1 ");
				break;
				}
			case 2:
				{
					printf("You're rating is 2");
					break;
				}
					case 3:{
				
			
				printf("You're rating is 3 ");
				break;
				}
			case 4:
				{
					printf("You're rating is 4");
					break;
				}
			
					{
						printf("You are not  allowed to give  more than 1 - 5 rating");
					}
					}
return 0;

}
