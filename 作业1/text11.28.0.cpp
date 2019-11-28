#include <stdio.h>

int climbstairt(int n)
{
	int count = 0;
	int p1 = 2 , p2 = 3;
	if(n == 1)
	return 1;
	if(n == 2)
	return 2;
	if( n == 3)
	return 3;
	while(n>3)
	{
		count = p1 + p2;
		p1 = p2;
		p2 = count;
		n--;
	}
	return count;
}
int main()
{
	int n;
	scanf("%d",&n);
	
	printf("%d",climbstairt(n));
	return 0;
}


