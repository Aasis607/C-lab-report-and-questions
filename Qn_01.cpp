#include<stdio.h>
int main()
{				int phy,chem,math;
				float total;
				printf("Enter your marks in physics ",phy);
				scanf("%d",&phy);

				printf("Enter your marks in chem",chem);
				scanf("%d",&chem);

				printf("Enter your marks in math",math);
				scanf("%d",&math);

				total=(phy+chem+math)/3;
				if ((total<=40) || phy<=33 || chem<=33 || math<=33)
				{
					printf("Your total marks is %f and you have been failed",total);
				}
				else{
					printf("Your total marks is %f and you have been passed",total);
				}
				

	
	return 0;
}
