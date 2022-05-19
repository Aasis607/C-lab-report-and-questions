#include<stdio.h>
int main()
{
		 int resume;
		 int i=0;
		 printf("Enter the number to resume  ",resume);
		 scanf("%d",&resume);
		 
		 while(i<10){
		 	i++;
		 
		 if(i!=resume)
		 { 
		 	continue;
		 }
		 else
		 {
		 	printf("%d",i);
		 
		 }
	}
return 0;
}
