#include<stdio.h>

int main ()
{
    int month, day, year;
    
	printf("Enter a date: \n");
	scanf("%d/%d/%d",&month,&day,&year);
	printf("You enter the dated: %d%.2d%d",year,month,day);
	
		
    return 0;	
}
