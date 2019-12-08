/*字符串的相关函数*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void String()
{
	char str1[30] = "wfds";
	char str2[] = "zfds";
	strcpy(str1,str2);//把str2复制到str1中，str1的长度要比str2大
	puts(str1);
	puts(str2);
	strcat(str1,str2);//把str1链接到str2中，总长度空间大于两个的空间
	puts(str1);
	puts(str2);
	printf("len = %lu\n",strlen(str1));//计算字符串的长度
	printf("len = %lu\n",strlen(str2));//不包括'\0'
	printf("%d\n",strcmp(str1,str2)); 
}
void ctype()
{
	char ch = 'a',ch1 = 'A';
	printf("%d\n",isalpha(ch));//是否为字母
	printf("%d\n",isupper(ch));//是否为大写
	printf("%d\n",islower(ch));//是否为小写
	printf("%d\n",isdigit(ch));//是否为数字
	printf("%c\n",toupper(ch));//转化为大写
	printf("%c\n",tolower(ch1));//转化为小写 
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
    //将num按照%d的格式存储到chs中
    sprintf(chs,"%d",num);
    printf("chs=%s\n",chs);
    //将字符串按照指定的格式存储
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
