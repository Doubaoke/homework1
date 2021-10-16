#include <math.h>
float mysqrt(float n){
	//how to guess
	float x = n/2;
	if (x*x > n)
	   x = (0+n/2);
	else
	   x = (n/2+n)/2;
	   
}
