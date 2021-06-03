#include<stdio.h>
int main()
{
	float farhneit,celsius;
	printf("enter the temperature in degrees :: ");
	scanf("%f",&farhneit);
	celsius=(farhneit-32)*5/9;
	printf("temperature in farhneit :: %f \n",farhneit);
	printf("temperature in celsius :: %f ",celsius);
	return 0;
}
