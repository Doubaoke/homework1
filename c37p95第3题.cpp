#include <stdio.h>
int main(void) {
	int son1,father1,GCD, a, b;
	printf("Enter a fraction: ");
	scanf("%d/%d", &son1, &father1);
	a = son1;
	b = father1;
	
	for ( ;son1 != 0; son1 = GCD){
	  GCD = father1 % son1 ;
	  father1 = son1;
	}  
	son1 = a / father1;
	father1 = b / father1;
	printf("In lowest terms: %d/%d", son1, father1);
	
	return 0;
}
////m, n, GCD*******
////  while (n != 0) {
  //	GCD = m % n;
  	//m = n;
  	
  	
//
////  }//////
  ///////
