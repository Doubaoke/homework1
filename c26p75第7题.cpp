#include <stdio.h>
int main(){
	int a, b, c, d, B, S;
	printf("Enter four integers: ");
	scanf("%d%d%d%d",&a, &b, &c, &d);
	
	if (a > b){
	   B = a;S = b;
	}
	else  {
	   B = b; S = a
    }
	if  (c >B){
		B = c;
	}
	else if (c <S){
		S = c;
	}
	if  (d >B){
		B = d;
	}
	else if (d <S){
		S = d;
	}
	
	printf("Largest = %d",B);
	printf("Smallest = %d",S);
	
	return 0;
	
	
} 

