#include <stdio.h>

int main()
{
   int a[10] = {1,5,8,6,9,7,2,4,3,0};
   int temp;
   int i ,j;
   for(i = 0;i<10;i++)
   {
   	for(j = 0;j<10-i;j++)
   	{
   		if(a[j] > a[j+1])
   		{
   			temp = a[j];
   			a[j] = a[j+1];
   			a[j+1] = temp;
		   }
	   }
	}
 	for ( i = 0; i<10;i++)
   	{
   		printf("%d ",a[i]);
	   }
	   return 0;
}
