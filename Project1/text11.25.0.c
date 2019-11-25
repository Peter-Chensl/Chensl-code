#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	system("color f4");//设置窗口颜色
	system("title tanzi v-1");//设置窗口的标题
	system("mode con:cols = 100 lines = 30");//设置窗口的大小
	printf("\t\t 欢迎来到小龙同学的系统\n");
	printf("\t\t-----------------------\n");
	printf("\t\t1.启动计算器           \n");
	printf("\t\t2.新建记事本           \n");
	printf("\t\t3.打开画图板           \n");
	printf("\t\t4.15s后自动关机        \n");
	printf("\t\t5.30s后自动关机        \n");
	printf("\t\t6.60s后自动关机        \n");
	printf("\t\t7.显示时间             \n");
	printf("\t\t8.重启计算机           \n");
	printf("\t\t0.退出系统             \n");
	printf("\t\t-----------------------\n");
	printf("请输入你的选择：");
	scanf("%d", &i);
	switch (i)
	{
	case 1:
		printf("计算机将启动其计算\n");
		system("calc");
		break;
	case 2:
		printf("计算机将新建记事本\n");
		system("notepad");
		break;
	case 3:
		printf("计算机将打开画图板\n");
		system("mspaint");
		break;
	case 4:
		for (int t = 15; t >= 0; t--)
		{
			Sleep(1000);
			printf("%d s", t);
		}
		system("shutdown -s -t 1");
		break;
	case 5:
		for (int t = 30; t >= 0; t--)
		{
			Sleep(1000);
			printf("%d s", t);
		}
		system("shutdown -s -t 1");
 	case 6:
		for (int t =60; t >= 0; t--)
		{
			Sleep(1000);
			printf("%d s", t);
		}
		system("shutdown -s -t 1");
		break;
	case 7:
		system("date");
		break;
	case 8:
		system("shutdown -r -t 1");
	case 0:
		exit(0);
	}
}