#include <stdio.h>
#include <stdlib.h>

/*选择排序*/
void SelectSort(int *arr,int len)
{
	int i , j;
	int temp = 0;
	int minlndex = 0;
	for(i = 0; i < len;++i)
	{
		minlndex = i;//保存当前下标
		for(j = i+1;j < len;++j)
		{
			if(arr[j] < arr[minlndex])
			{
				temp = arr[j];
				arr[j] = arr[minlndex];
				arr[minlndex] = temp;
			}
		 } 
	}
 } 
 /*冒泡排序*/
 void BubbleSort(int *arr,int len)
 {
 	int i,j;
 	int temp = 0;
 	bool swap = false;
 	for (i = 0; i < len-1;i++)//趟数
	 {
	 	swap = false;
	 	for (j = 0;j<len-1-i;j++)
	 	{
	 		if(arr[j]>arr[j+1])
	 		{
	 			temp = arr[j];
	 			arr[j] = arr[j+1];
	 			arr[j+1] = temp;
	 			swap = true;
			 }
		 }
		 if(!swap)//swap == false 没有交换，说明数据在这一趟已经有序，直接输出 
		 {
		 	return ;
		 }
	  } 
 }
 /*直接插入排序*/
 void InsertSort(int *arr,int len) 
 {
 	int i,j;
 	int temp = 0;
 	for(i = 1;i < len;++i)
 	{
 		temp = arr[i];
 		for( j = i-1;j>=0;--j)
 		{
 			if(arr[j]>temp)
 			{
 				arr[j+1] = arr[j];
			 }
			 else
			 {
			 	break;
			 }
		 }
		 arr[j+1] = temp;
	 }
 }
 void Show(int *arr, int len)
 {
 	for(int i = 0;i < len;++i)
 	{
 		printf("%d ",arr[i]);
	 }
	 printf("\n");
 }
 /*希尔排序*/
 void Shell(int *arr,int len,int gap)//gap为分组的跨度 
 {
 	int i , j;
 	int temp = 0;
 	for(i = gap;i<len;++i)
 	{
 		temp = arr[i];
 		for(j = i - gap;j>=0;j-=gap)
 		{
 				if(arr[j]>temp)
 		{
 			arr[j+gap] = arr[j];
		 }
		 else
		 {
		 	break;
		 }
		 }
		 arr[j+gap] = temp;
	 }
 }
 void ShellSort(int *arr,int len)
 {
 	int drr[] = {5,3,1};
 	int lend = sizeof(drr)/sizeof(drr[0]);
 	for(int i = 0;i<lend;i++)
 	{
 		Shell(arr,len,drr[i]);
	 }
 }
 int main()
 {
 	system("color 2f");
 	int arr[] = {4,1,5,12,5,8,8,6,0};
 	int len = sizeof(arr)/sizeof(arr[0]);
 	int n;
 	printf("*****************************\n");
 	printf("*       1.选择排序          *\n");
 	printf("*       2.冒泡排序          *\n");
 	printf("*       3.直接插入排序      *\n");
 	printf("*       4.希尔排序          *\n");
 	printf("*       0.退出程序          *\n");
 	printf("*****************************\n");
	printf("请选择(0-4):");
	scanf("%d",&n);
	while(1)
	{
		switch(n)
		{
			case 1:
				printf("选择排序:\n");
				SelectSort(arr,len);
 	  			Show(arr,len);
 	  			break;
			case 2:
				BubbleSort(arr,len);
				Show(arr,len);
				break; 
			case 3:
				InsertSort(arr,len);
				Show(arr,len);
				break;
			case 4:
				ShellSort(arr,len);
				Show(arr,len);
				break;		
			case 0:
				exit(0);
				break;
			default:
				printf("没有此功能，请重新输入！");
				
		}
		printf("请选择(0-4):");
				scanf("%d",&n);
	 } 
 	return 0;
 }
