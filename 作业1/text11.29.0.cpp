#include <stdio.h>
#include <stdlib.h>
int romanToInt(char* s) 
{
	int b = 0;//����λ�ַ���
	int a = 0;//���
	for (; s[b] != '\0'; b++);//�����ַ�����
	for (int i = 0; i<b; i++)//���бȽ�
	{
		if (i == b - 1)
		{
			if (s[i] == 'M')
			{
				a += 1000;
			}
			if (s[i] == 'D')
			{
				a += 500;
			}
			if (s[i] == 'C')
			{
				a += 100;
			}
			if (s[i] == 'L')
			{
				a += 50;
			}
			if (s[i] == 'X')
			{
				a += 10;
			}if (s[i] == 'V')
			{
				a += 5;
			}
			if (s[i] == 'I')
			{
				a += 1;
			}
			break;
		}
		if ((s[i] == 'I'&&s[i + 1] == 'V') || (s[i] == 'I'&&s[i + 1] == 'X'))
		{

			a -= 1;
			continue;
		}
		if ((s[i] == 'X'&&s[i + 1] == 'L') || (s[i] == 'X'&&s[i + 1] == 'C'))
		{

			a -= 10;
			continue;
		} if ((s[i] == 'C'&&s[i + 1] == 'D') || (s[i] == 'C'&&s[i + 1] == 'M'))
		{

			a -= 100;
			continue;
		}
		if (s[i] == 'M')
		{
			a += 1000;
		}
		if (s[i] == 'D')
		{
			a += 500;
		}
		if (s[i] == 'C')
		{
			a += 100;
		}
		if (s[i] == 'L')
		{
			a += 50;
		}
		if (s[i] == 'X')
		{
			a += 10;
		}if (s[i] == 'V')
		{
			a += 5;
		}
		if (s[i] == 'I')
		{
			a += 1;
		}
	}
	return a;
}
int main()
{
	char s[1000] = { 0 };
	printf("��������������-> ");
	while (1)
	{
		scanf("%s", &s);
		int a = romanToInt(s);
		if (a<3999 && a>1)
		{
			printf("%d\n", a);
			break;
		}
		else
		printf("������������������->");
	}
	system("pause");
	return 0;
}
