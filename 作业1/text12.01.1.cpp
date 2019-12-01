/*输出特殊图案，请在c环境中运行，看一看，Very Beautiful!*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
	char a = 176,b = 219;
	long time;
	printf("%c%c%c%c%c",b,a,a,a,b);
	printf("%c%c%c%c%c",a,b,a,b,a);
	printf("%c%c%c%c%c",a,a,b,a,a);
	printf("%c%c%c%c%c",a,b,a,b,b);
	printf("%c%c%c%c%c",b,a,a,a,b);
	for(;;)
	{
		system("color a");
		for (time = 0;time<99999999;time++);
		system("color b");
		for (time = 0;time<99999999;time++);
		system("color c");
		for (time = 0;time<99999999;time++);
		system("color d");
		for (time = 0;time<99999999;time++);
		system("color e");
		for (time = 0;time<99999999;time++);
		system("color f");
		for (time = 0;time<99999999;time++);
		system("color 1");
		for (time = 0;time<99999999;time++);
		system("color 2");
		for (time = 0;time<99999999;time++);
		system("color 3");
		for (time = 0;time<99999999;time++);
		system("color 4");
		for (time = 0;time<99999999;time++);
		system("color 5");
		for (time = 0;time<99999999;time++);
		system("color 6");
		for (time = 0;time<99999999;time++);
		system("color 7");
		for (time = 0;time<99999999;time++);
		system("color 8");
		for (time = 0;time<99999999;time++);
		system("color 9");
	}
}
