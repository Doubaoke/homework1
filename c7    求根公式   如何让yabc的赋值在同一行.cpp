#include<math.h>
#include<stdio.h>
int main(void) {
	float x1, x2, y, a, b, c;
	printf("请输入系数\n");
	printf("y=");
	scanf("%d",&y); 
	printf("a=");
	scanf("%d",&a); 
	printf("b=");
	scanf("%d",&b); 
	printf("c=");
	scanf("%d",&c); 
	c = c - y;
    float temp  = sqrt(b * b - 4 * a * c);
    printf("该方程的根为\n"); 
	x1 = (-b + temp)/(2 * a);
	x2 = (-b - temp)/(2 * a);
	printf("x1 = %f\n",x1);
	printf("x2 = %f\n",x2);
	
	return 0;
}
