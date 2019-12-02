#include <stdio.h>

int main()
{
	int i , j , k , n;
	printf("水仙花数是：");
	for(n = 100;n<1000;n++)
	{
		i = n/100;
		j = n/10%10;
		k = n%10;
		if(i*100+j*10+k == i*i*i+j*j*j+k*k*k)
		printf("%-5d",n);
	 } 
	return 0;
}
