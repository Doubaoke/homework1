#include <stdio.h>

int main()
{
	float a, b;
	
	printf("Enter an amount:");
	scanf("%f",&a);
	b = a * 1.05f; 
	
	printf("With tax added: %f",b);
	
	return 0;
} 
