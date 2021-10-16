#include <stdio.h>

int main(void)
{
	int r, V;
	
	printf("r =  ");
	scanf("%d", &r);
	V = 4.0f/3.0f * 3.14 * r * r * r;
	
	printf("V = %-16.4g",V);
	
	return 0; 
 } 
