#include <stdio.h>
int main(){

int num1,num2,hcf,count = 1;
printf("Enter 2 numbers: ");
scanf("%d%d",&num1,&num2);
while( count <= num1 && count <= num2){
	if (num1 % count == 0 && num2 % count == 00){
		hcf = count;
	}
	count++;
}
printf("HCF is %d", hcf);
}
