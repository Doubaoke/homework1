#include <stdio.h>
int main(void) {
	int n, i, a;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for (i = 2; i * i <= n; i += 2) {
	  a = i * i; 
	  printf("%d\n", a);
	}  
	
	return 0;
	
} 


