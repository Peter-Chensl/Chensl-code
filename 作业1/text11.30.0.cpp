/*��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�*/
#include<stdio.h>
#include <conio.h>

int main()
{
	int i,j,k;
	int count = 0;
	printf("\n");
	for(i = 1;i<5;i++)
	for(j = 1;j<5;j++)
	for(k = 1;k<5;k++)
	{
		if(i != j&&i!=k&&j!=k)
		{
		printf("%d%d%d ",i,j,k);
		count++;
		}
	}
	printf("\n%d",count);
	getch;
	return 0;
 } 
