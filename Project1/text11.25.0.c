#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	system("color f4");//���ô�����ɫ
	system("title tanzi v-1");//���ô��ڵı���
	system("mode con:cols = 100 lines = 30");//���ô��ڵĴ�С
	printf("\t\t ��ӭ����С��ͬѧ��ϵͳ\n");
	printf("\t\t-----------------------\n");
	printf("\t\t1.����������           \n");
	printf("\t\t2.�½����±�           \n");
	printf("\t\t3.�򿪻�ͼ��           \n");
	printf("\t\t4.15s���Զ��ػ�        \n");
	printf("\t\t5.30s���Զ��ػ�        \n");
	printf("\t\t6.60s���Զ��ػ�        \n");
	printf("\t\t7.��ʾʱ��             \n");
	printf("\t\t8.���������           \n");
	printf("\t\t0.�˳�ϵͳ             \n");
	printf("\t\t-----------------------\n");
	printf("���������ѡ��");
	scanf("%d", &i);
	switch (i)
	{
	case 1:
		printf("����������������\n");
		system("calc");
		break;
	case 2:
		printf("��������½����±�\n");
		system("notepad");
		break;
	case 3:
		printf("��������򿪻�ͼ��\n");
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