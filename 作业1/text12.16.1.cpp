/*һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ�*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,y;
	int n,count = 0;
	for(x = 10;x < 1000;x++)
	{
		for(y = 13; y < 1000;y++)
		{
			n = 0;
			while(n < 1000)
			{
				if((n + 100 == x*x)&&(n+268 == y*y))
				{
					printf("%d %d %d",x,y,n);
					break;
				}
				else{
					n = n+1;
				}
			}
		}
	}
	return 0;
}
