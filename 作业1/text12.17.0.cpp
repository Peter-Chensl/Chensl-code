#include <stdio.h>
#include <stdlib.h>

/*ѡ������*/
void SelectSort(int *arr,int len)
{
	int i , j;
	int temp = 0;
	int minlndex = 0;
	for(i = 0; i < len;++i)
	{
		minlndex = i;//���浱ǰ�±�
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
 /*ð������*/
 void BubbleSort(int *arr,int len)
 {
 	int i,j;
 	int temp = 0;
 	bool swap = false;
 	for (i = 0; i < len-1;i++)//����
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
		 if(!swap)//swap == false û�н�����˵����������һ���Ѿ�����ֱ����� 
		 {
		 	return ;
		 }
	  } 
 }
 /*ֱ�Ӳ�������*/
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
 /*ϣ������*/
 void Shell(int *arr,int len,int gap)//gapΪ����Ŀ�� 
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
 	printf("*       1.ѡ������          *\n");
 	printf("*       2.ð������          *\n");
 	printf("*       3.ֱ�Ӳ�������      *\n");
 	printf("*       4.ϣ������          *\n");
 	printf("*       0.�˳�����          *\n");
 	printf("*****************************\n");
	printf("��ѡ��(0-4):");
	scanf("%d",&n);
	while(1)
	{
		switch(n)
		{
			case 1:
				printf("ѡ������:\n");
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
				printf("û�д˹��ܣ����������룡");
				
		}
		printf("��ѡ��(0-4):");
				scanf("%d",&n);
	 } 
 	return 0;
 }
