#include<stdio.h>
int main(void) {
	int m, n, GCD;
	printf("Enter two integers:  ");
	scanf("%d %d", &m, &n);
	
	while (n != 0) {
	   GCD = m % n;
	   m = n;
	   n = GCD;
	  
	}
	 printf("%d", m);
	 
	return 0;
} 
