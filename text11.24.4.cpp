//�ػ����� 
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h> 
int main()
{
	char input[20] = { 0 };
		long time;
	
	system("shutdown -s -t 60");// ������60s�ڹػ�
again:
	printf("��ע�⣡��ĵ����Ѿ��ж���1�����ڹػ���������롰������,��ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)  //strcmp�ַ����Ƚ�
	{
		system("shutdown -a");  //��ֹ�ػ�
	}
	else
	{
		goto again;  // gotoһ�ο���������㣬����û��ڹ涨ʱ����û��������ȷ�𰸣���������������û����룬ֱ���û�������ȷ�𰸻�ػ���
	}
for (;;)
	{
		system("color a");
		for(time = 0;time < 999999999;time++);
		system("color b");
		for(time = 0;time < 999999999;time++);
		system("color c");
		for(time = 0;time < 999999999;time++);
		system("color d");
		for(time = 0;time < 999999999;time++);
		system("color f");
		for(time = 0;time < 999999999;time++);
		system("color f");
		for(time = 0;time < 999999999;time++);
		system("color 1");
		for(time = 0;time < 999999999;time++);
		system("color 2");
		for(time = 0;time < 999999999;time++);
		system("color 3");
		for(time = 0;time < 999999999;time++);
		system("color 4");
		for(time = 0;time < 999999999;time++);
		system("color 5");
		for(time = 0;time < 999999999;time++);
		system("color 6");
		for(time = 0;time < 999999999;time++);
		system("color 7");
		for(time = 0;time < 999999999;time++);
		system("color 8");
		for(time = 0;time < 999999999;time++);
		system("color 9");
		for(time = 0;time < 999999999;time++);
	 } 
	return 0;
}
