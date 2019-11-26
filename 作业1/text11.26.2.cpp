#include<stdio.h>
#include <math.h>
int main()
{
	double x;
	for(x = 2.0;x<3.0;x+=0.00000001)
	{
		if(fabs(pow(x,x)-10)<0.000001)
		printf("%.8lf\n",x);
	}
	return 0;
}

