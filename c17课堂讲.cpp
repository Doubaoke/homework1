#include <stdio.h>
int main() 
{
 	int year; 
 	scanf("%d",&year);
	if (year % 4 == 0  )
	  if(year % 100 != 0)
	    printf("%d 年就是闰年\n", year);
	  else
	    printf("%d 年不是闰年", year);
	else
	  printf("%d 年不是闰年", year); 

    return 0;
} 
 
