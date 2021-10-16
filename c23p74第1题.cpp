#include<stdio.h>
int main(void){
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	
	if (a >= 0 && a <= 99)
	  if (a <10)
	    printf("The number %d has 1 digit.",a);
	  else
	    printf("The number %d has 2 digits.",a);
	else 
	printf("The number %d has 3 digits.",a); 
	
	return 0;
}
