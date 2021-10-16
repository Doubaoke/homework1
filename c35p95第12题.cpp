#include<stdio.h>
int main(void){
	int d, n;
	printf("Enter a number: ");
	scanf("%d",&n);
	for (d = 2; d < n && d * d <= n;d++ ){
	  if (n % d ==0)
	  break;
    }
    if (n % d ==0)
     printf("%d is divisiable by %d.\n", n, d);
    else 
     printf("%d is prime.\n", n); 
		
    return 0;  
	 
}





/****第10 行很诡异，不懂什么情况/// 

