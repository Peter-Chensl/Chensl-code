#include <stdio.h>

int number( int x)
{
	 int count = 0;
	while(x)
	{
		count++;
		x = x&(x-1);
	}
	return count;
}
int numberx( int x)
{
	int countx = 0;
	while (x+1)
	{
		countx++;
		x = x|(x+1);
	}
	return countx;
 } 
int main()
{
	int x , count = 0;
	int countx = 0;
	printf("����һ��������");
	scanf("%d",&x);
	countx = numberx(x);
	count = number(x);
	printf("1�ĸ���Ϊ��");
	printf("%d\n",count); 
	printf("0�ĸ���Ϊ��");
	printf("%d",countx);
}
