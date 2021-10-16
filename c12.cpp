#include<stdio.h>

int main(void)
{
	int i;
	float x;
	
	i = 40;
	x = 839.21f;
	
	printf("|%6d|%-7d|%d|%5.3d|\n",i, i ,i);
	printf("|%f|%8.8f|%15.9g|\n", x, x, x);
	
	return 0;
 } 
