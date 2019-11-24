//关机程序 
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h> 
int main()
{
	char input[20] = { 0 };
		long time;
	
	system("shutdown -s -t 60");// 电脑在60s内关机
again:
	printf("请注意！你的电脑已经中毒在1分钟内关机，如果输入“我是猪”,则取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)  //strcmp字符串比较
	{
		system("shutdown -a");  //终止关机
	}
	else
	{
		goto again;  // goto一次可以跳出多层，如果用户在规定时间内没有输入正确答案，程序继续跳到让用户输入，直到用户输入正确答案或关机。
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
