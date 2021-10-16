#include <stdio.h>
int main (void) {
	int days, first, a, b;
	printf("days = ");
	scanf("%d", &days);
	printf("first = ");
	scanf("%d", &first);
	
	for (b = 1; b < first ; b++){
	 printf("     ");
	}
	
	for (a = 1; a <= days; a++) {
		if ((a + first - 1) % 7 == 0)
		  printf("%5d\n",a);
		  else
		  printf("%5d",a); 
	}	  
    return 0;
	
} 
