#include<stdio.h>


int main()
{
	long i = 1;
	double sum = 0;
	for(i = 1;i<= 100000000000;i++)
	{
		sum =sum+1.0/i;
		if(sum >= 15.0)
		break;
	}
	printf("%ld",i+1);
	return 0;
	
}
