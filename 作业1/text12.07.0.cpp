/*�ַ�������غ���*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void String()
{
	char str1[30] = "wfds";
	char str2[] = "zfds";
	strcpy(str1,str2);//��str2���Ƶ�str1�У�str1�ĳ���Ҫ��str2��
	puts(str1);
	puts(str2);
	strcat(str1,str2);//��str1���ӵ�str2�У��ܳ��ȿռ���������Ŀռ�
	puts(str1);
	puts(str2);
	printf("len = %lu\n",strlen(str1));//�����ַ����ĳ���
	printf("len = %lu\n",strlen(str2));//������'\0'
	printf("%d\n",strcmp(str1,str2)); 
}
void ctype()
{
	char ch = 'a',ch1 = 'A';
	printf("%d\n",isalpha(ch));//�Ƿ�Ϊ��ĸ
	printf("%d\n",isupper(ch));//�Ƿ�Ϊ��д
	printf("%d\n",islower(ch));//�Ƿ�ΪСд
	printf("%d\n",isdigit(ch));//�Ƿ�Ϊ����
	printf("%c\n",toupper(ch));//ת��Ϊ��д
	printf("%c\n",tolower(ch1));//ת��ΪСд 
}
void Stringctype()
{
	char ch[100],ch1;
	gets(ch);
	int i = 0;
	while(ch[i] != '\0')
	{
		ch1 = ch[i];
		if(isupper(ch1)==1)
		{
			ch1 = tolower(ch1);
		}
		else
		{
			ch1 = toupper(ch1);
		}
		putchar(ch1);
		i++;
	}
	printf("\n");
}
void translent()
{
	int num = 1000;
 char chs[100];
    //��num����%d�ĸ�ʽ�洢��chs��
    sprintf(chs,"%d",num);
    printf("chs=%s\n",chs);
    //���ַ�������ָ���ĸ�ʽ�洢
    sprintf(chs, "%10s","asdf");
    printf("chs=%s",chs);
 } 
 int main()
 {
 	String();
 	ctype(); 
 	Stringctype();
 	translent();
 	return 0;
 }
