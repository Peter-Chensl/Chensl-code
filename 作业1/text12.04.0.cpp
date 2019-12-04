#include<stdio.h>
int main()
{
	int n;
	int i,j,k;
	int flag = 0;
	printf("请输入一个大于2的正整数：");
	scanf("%d",&n);
    for (i = 1; i <= n/2; i++)
    {
        for(j=i+1; j<=n/2+1; j++)
        {
            if((i+j)*(j-i+1)/2 == n)
            {
                flag = 1;

                for(k = i; k <= j; k++)
                {
                    printf("%2d", k);
                }
                printf("\n");
            }
        }
    }
	if(!flag)
	{
		printf("NONE\n");
	}
	return 0;
 } 
