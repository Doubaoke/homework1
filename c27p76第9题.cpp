#include <stdio.h>
int main(){
	int a, b, c;
	int A, B, C;
	
	printf("Enter first date: ");
	scanf("%d/%d/%d",&a, &b, &c);
	printf("Enter second date: ");
	scanf("%d/%d/%d",&A, &B, &C);
	
	
	if (c < C){
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d",a, b, c, A, B, C); 
	}
	else if (c == C && a <A) {
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d",a, b, c, A, B, C); 
	}
	else if (c == C && a == A && b < B){
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d",a, b, c, A, B, C); 
	}
	else  {
	    printf("%d/%d/%.2d is earlier than %d/%d/%.2d",A, B, C, a, b, c); 
	}
	
	return 0;
	
	 
} 
