#include<stdio.h>
int main(){
	float radius,circumference,area;
	printf("enter radius:");
	scanf("%f",&radius);
	
	circumference=2*3.14*radius;
	printf("circumference of circle is :%f\n",circumference);
	
	area=3.14*radius*radius;
	printf("area of circle is: %f",area);
	
	return 0;
}
