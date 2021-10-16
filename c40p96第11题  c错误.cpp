#include <stdio.h>
int main(void) {
	int  n;
	float  a, b, e;
	
	scanf("%d", &n);
	for (a = 1.0f, b = 1.0f , e = 1.0f; a <=n; ++a ) {
		b = b / a;
		e = e + b;
	}
    
	printf("e = %f", e);
	
	return 0; 
} 
