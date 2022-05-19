#include <stdio.h>
int main(){
	
	int num;
	int even =0;
	int odd = 0;
	printf("Enter any number: ");
	scanf("%d", &num);
	for (int i =1; i<=num; i++){
	
		if (i % 2 ==0){
			even = even + i;
			
		}
		else
		odd = odd + i;
	}
	printf("The sum of odd numbers is %d \n",odd);
	printf("The sum of even numbers is %d", even);
	return 0;
}
