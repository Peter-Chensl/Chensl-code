//鼠标失灵 
#include <windows.h>
#include <stdio.h>
#include<time.h>
#include <conio.h>
int main()
{
	system("title");
	int x, y;
	printf("按任意键暂停！");
	while (!_kbhit())
	{
		x = 1;
		y = 1;
		SetCursorPos(x, y);
	}
	return 0;
}
