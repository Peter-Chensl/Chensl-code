#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void Triangle()//ֱ�������� 
{
	int i, j;
	for (i = 0; i < 6; i++)
	{
		for (j = 6; j>i; j--)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n"); 
	}
}
void Triangle1()//��������������
{
	int i, j;
	for(i = 0; i < 6;i++)
	{
		for(j = 6;j > i;j--)
		{
			printf(" ");
		}
		for( j = 0; j < 2*i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
 } 
 void Triangle2()//�������������� 
 {
 	int i , j;
	 for(i = 0; i < 6;i++)
	 {
	 	for(j = 0; j < i;j++)
	 	{
	 		printf(" ");
		 }
		 for( j = 0; j < 11-2*i;j++)
		 printf("*");
		  printf("\n"); 
	  }
	 
 }
 void Triangle3()
 {
 	int i , j;
 	for(i = 0; i < 6;i++)
 	{
 		for(j = 6;j > i;j--)
 		{
 			printf(" ");
		 }
		 for(j = 0; j < 2*i+1;j++)
		 {
		 	if(j == 0||j==2*i||i==0||i==5)
		 	printf("*");
		 	else
		 	printf(" ");
		 }
		 printf("\n");
	 }
	 
 }
 void Diamond()//����
 {
 	int i, j ,k;
 	for( i =1;i <= 6;i++)
 	{
 		for(j = 6;j>i;j--)
 		{
 			printf(" ");
		 }
		 for(k = 1;k<=2*i-1;k++)
		 {
		 	printf("*");
		 }
		 printf("\n");
	 }
	 for(i=1;i<=6;i++)
	 {
	 	for(j =1;j<=i-1;j++)
	 	{
	 		printf(" ");
		 }
		 for(k = 1;k <=13-2*i;k++)
		 {
		 	printf("*");
		 }
		 printf("\n");
	 }
  } 
int main()
{
	int i = 0, j = 0,k = 0;
	int n;
	printf("****************************************\n");
	printf("*              1.��ӡֱ��������        *\n");
	printf("*              2.��ӡ���������Σ�������*\n");
	printf("*              3.��ӡ���������Σ�������*\n");
	printf("*              4.��ӡ���������Σ�������*\n");
	printf("*              5.��ӡ����              *\n");
	printf("*              0.�˳�����              *\n");
	printf("****************************************\n");
	printf("��ѡ��");
	scanf("%d",&n);
	while(1)
	{
		switch(n)
		{
			case 1:
				Triangle();
				break;
			case 2:
				Triangle1();
				break; 
			case 3:
				Triangle2();
				break; 
			case 4:
				Triangle3();
				break;
			case 5:
				Diamond();
				break; 
			case 6:
			exit(0);
			break; 
			default:
				printf("\nû�д˹��ܣ����������룡\n");
		}
			printf("��ѡ��"); 
			scanf("%d",&n); 
	 } 

	return 0;
}
