/*数组*/
#include <stdio.h>

void Max()
{
	int age[5];
	float sum = 0;
	printf("请输入5个整数：\n");
	for(int i = 0;i < 5;i++)
	{
		scanf("%d",&age[i]);
	}
	int min = age[0];
	int max = age[0];
	for(int i = 1;i < 5; i++)
	{
		sum = sum + age[i];
		if(age[i]>max)
		{
			max = age[i];
		}
		if(age[i]<min)
		{
			min = age[i];
		}
	}
	printf("max = %d\n",max);
	printf("min = %d\n",min);
 } 
 void paixu()
 {
 	int arr[5],t;
 	printf("请输入5个整数：\n");
 	for(int i = 0;i < 5;i++)
 	{
 		scanf("%d",&arr[i]);
	 }
	 for (int i = 0;i < 4;i++)
	 {
	 	for(int j = 0; j < 4-i; j++)
	 	{
	 		if(arr[j]>arr[j+1])
	 		{
	 			t = arr[j];
	 			arr[j] = arr[j+1];
	 			arr[j+1]=t;
			 }
		 }
	 }
	 for (int i = 0; i < 5;i++)
	 {
	 	printf("%d\t",arr[i]);
	 }
 }
 
 int main()
 {
 	Max();
 	paixu();
 	return 0;
 }
