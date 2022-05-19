#include<stdio.h>
#include<math.h>
int main(){
	int c,b,a,x,x2;
	printf("Enter the values of a b and c: ");
	scanf("%d%d%d", &a,&b,&c);
	x = -b + ((pow(b,2)-4*a*c)*1/2)/2*a;
	x2 = -b - ((pow(b,2)-4*a*c)*1/2)/2*a;
	printf("positive value is %d ", x);
	printf("negative value is %d ", x2);
	return 0;
}
