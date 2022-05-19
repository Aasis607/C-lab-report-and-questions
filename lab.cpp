#include <stdio.h>
int main(){
	int n, rev = 0 ,remainder, number, reversed;
	printf("Enter a number: ");
	scanf("%d", &n);
	number = n;
	
	while (n != 0){
		 remainder = n % 10;
		 reversed = reversed * 10 + remainder;
		n = n/10;
	}
	if (number == reversed)
        printf("%d is a palindrome.", number);
    else
        printf("%d is not a palindrome.", number);

    return 0;
}

