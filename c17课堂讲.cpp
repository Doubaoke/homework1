#include <stdio.h>
int main() 
{
 	int year; 
 	scanf("%d",&year);
	if (year % 4 == 0  )
	  if(year % 100 != 0)
	    printf("%d ���������\n", year);
	  else
	    printf("%d �겻������", year);
	else
	  printf("%d �겻������", year); 

    return 0;
} 
 
