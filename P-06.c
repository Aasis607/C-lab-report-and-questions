#include <stdio.h>
char c(){
	
	switch(char){
		case 'V' : printf("Violet color");break;
		case 'I' : printf("Indigo color");break;
		case 'B' : printf("Blue color");break;
		case 'G' : printf("Green color");break;
		case 'Y' : printf("Yello color");break;
		case 'O' : printf("Orange color");break;
		case 'R' : printf("Red color");break;
		default : printf("Please enter a valid color");
		return c;
	}
}
int main(){
	char c;
	printf("Enter the color: ");
	scanf("%c", &c);
	
}