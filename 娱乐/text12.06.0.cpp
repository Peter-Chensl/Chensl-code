#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void Triangle()//直角三角形 
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
void Triangle1()//正立等腰三角形
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
 void Triangle2()//倒立等腰三角形 
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
 void Diamond()//菱形
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
	printf("*              1.打印直角三角形        *\n");
	printf("*              2.打印等腰三角形（正立）*\n");
	printf("*              3.打印等腰三角形（倒立）*\n");
	printf("*              4.打印空心三角形（倒立）*\n");
	printf("*              5.打印菱形              *\n");
	printf("*              0.退出程序              *\n");
	printf("****************************************\n");
	printf("请选择：");
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
				printf("\n没有此功能，请重新输入！\n");
		}
			printf("请选择："); 
			scanf("%d",&n); 
	 } 

	return 0;
}
