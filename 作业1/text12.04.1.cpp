/*��һ�������У�2/1��3/2��5/3��8/5��13/8��21/13�����������е�ǰ20��֮��*/
#include <stdio.h>

int main()
{
	int n ,t,number = 20;
	float a = 2,b = 1,s = 0;
	for(n = 1;n<=number;n++)
	{
		s = s+a/b;
		t = a;
		a = a+b;
		b = t;
	}
	printf("sum is %9.6f\n",s);
}
