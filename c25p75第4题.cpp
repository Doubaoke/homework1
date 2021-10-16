#include<stdio.h>
int main(void) {
	int a;
	printf("ÇëÊäÈë·çËÙ£º");
	scanf("%d",&a);
	
	if (a <= 63 && a >47)
	 printf("Storm");
	 else if (a > 27)
	  printf("Gale");
	 else if (a > 3) 
	  printf("Breeze");
	 else if (a > 1)
	  printf("Light air");
     else 
      printf("Calm");
      
    return 0;
}
