#include <stdio.h>
int main(){
	int f,n,a = 0,b = 1,c = 0;
	printf("enter a number: ");
	scanf("%d", &n);

	for (int i = 0; i <= n; i++){
	printf("%d ", a);
	a = b+c;
	b=c;
	c=a;
	
	
	}
	
	
	
	return 0;
}
