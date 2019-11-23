#include<stdio.h>
//³Ë·¨¿Ú¾÷±í 
int main()
{
	int i = 0,j = 0,result = 0;
	for(i = 0;i < 9;i++)
	{
		for(j = 1; j < 10; j++)
		{
			result  = (i+1) * j;
			printf("%d * %d = %-3d ",i+1 ,j ,result);
		}
	printf("\n");
	}
	
	return 0;
}
