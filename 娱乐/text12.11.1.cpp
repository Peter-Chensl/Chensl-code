/*��ӡͼ��*/ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
int i ,j;
void showlove()
{
{
	for(i = 0; i < 7;i++)
	{
		printf("* * * * * * * *\n");
	}
	Sleep(1000);
	system("cls");
	{
		printf("  * * * * * *  \n");
		printf("* * * * * * * *\n");
		printf("* * * * * * * *\n");
		printf("* * * * * * * *\n");
		printf("* * * * * * * *\n");
		printf("* * * * * * * *\n");
		printf("  * * * * * *  \n");
		Sleep(1000);
		system("cls");
	}
	{
		printf("  * * * * * *  \n");
		printf("* * * * * * * *\n");
		printf("* * * * * * * *\n");
		printf("* * * * * * * *\n");
		printf("* * * * * * * *\n");
		printf("  * * * * * *  \n");
		printf("    * * * *    \n");
		Sleep(1000);
		system("cls"); 
	}
	i = 0;
	while(i++<5)
	{
		printf("  * *     * *  \n");
		printf("* * * * * * * *\n");
		printf("* * * * * * * *\n");
		printf("* * * * * * * *\n");
		printf("  * * * * * *  \n");
		printf("    * * * *    \n");
		printf("      * *      \n");
		printf("       *       \n");
		Sleep(1000);
		system("cls");
		Sleep(1000);
		system("cls");
		
	}
}
}
int main() {
    while(1) {
	char orign1[]="I LOVE YOU";                     //��������Լ�����,�ұ������Լ�������
	char orign2[]="          ";
	int left = 0,right = strlen(orign2)-1;          //�����±긳ֵ,ע���ұ�����ַ���������Ҫ��һ��������ұ��ַ����±�
	while(left <= right) {                          //����ߴ����ұߵ�ʱ��,����ѭ��
		 orign2[left]=orign1[left];                 //i love you ���ַ��������Ĵ��� �ո��ַ���
		 orign2[right]=orign1[right];               
		 left++;                                    //�����Լ�����ַ����� "�ƶ�"
		 right--;
		 printf("%s\n",orign2);                     
		 Sleep(1000);                               //Ȼ��˯��һ��
		 system("cls");                             //������Զ����¼�����������һ��֮��ִ�е���������������� 	 
	}
	showlove();                                     //ִ������ͼ����ʾ����

 }
}

