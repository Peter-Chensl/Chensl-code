#include <stdio.h>

int main()
{
	int  arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int b[4][4] = {0};
	int i , j,n;
	int (*p)[4] = arr;
	printf("��ָ�������\n");
	for(i = 0;i<4;i++)
	{
		for(j = 0;j<4;j++)
		{
			printf("%2d ",*(*(p+i)+j));
		}
		printf("\n"); 
	}
	printf("�������������\n");
	for(i = 0;i<4;i++)
	{
		for(j = 0;j<4;j++)
		{
			b[i][j] = arr[i][j];
		}
	}
		for(i = 0;i<4;i++)
	{
		for(j = 0;j<4;j++)
		{
			printf("%2d ",b[i][j]);
		}
		printf("\n"); 
	}
	printf("������һ����������");
	scanf("%d",&n);
		for(i = 0;i<4;i++)
	{
		for(j = 0;j<4;j++)
		{
			if(arr[i][j]==n)
			printf("a[%d][%d]",i+1,j+1); 
		}
	return 0;
}
} 
