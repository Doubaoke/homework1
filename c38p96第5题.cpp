#include<stdio.h>
int main(void) {
	int n, a;
	printf("Enter a number:  ");
	scanf("%d",&n);
	
	do {
		a = n % 10;
		n /= 10;
		printf("%d",a);
	} while (n != 0);
	
	return 0;
} 
