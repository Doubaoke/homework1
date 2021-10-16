#include <stdio.h> 
int main (void){
	float i, a;
	printf("Enter a number: ");
	scanf("%f",&i);
	a = i;
	
	
	do {
		printf("Enter a number: ");
		scanf("%f",&i);
		if (i <a)
		  a = a;
		else a = i ;
	} while(i > 0);
	
	printf("The largest number entered was %f",a);
	
	return 0;
}
