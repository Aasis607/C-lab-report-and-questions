#include<stdio.h>
	int main()
{
//					Here i= simple interest; t=Time; Rate=r; p=principal;

				int s,p,t,r;
				printf("Given rate,time,principal:",r,t,p);
			
				scanf("%d %d %d",&r,&t,&p);
				 s=(p*t*r)/100;
				 printf("Simple interest: %d",s);
	return 0;
}
