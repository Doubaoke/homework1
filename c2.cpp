/*Computes the dimensional weight of a box from input provided by user*/

#include <stdio.h>

int main(void) 
{
	int height, lenght, width, volume, weight;
	printf("Enter height of box: ");
	scanf("%d", &height);
	printf("Enter lenght of box: ");
	scanf("%d", &lenght);
	printf("Enter width of box: ");
	scanf("%d", &width);
	volume = height * lenght * width;
	weight = (volume + 165) / 166;
	
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);
	
	return 0;
} 
