/*×Ö·ûºÍ×Ö·û´®*/
#include <stdio.h>
#include <stdlib.h>
void Print()
{
	char arr[1000];
	int i = 0, j = 0;
	char ch;
	while((ch = getchar())!='\n')
	{
		arr[i] = ch;
		i++;
	}
	arr[i] = '\0';
	while(arr[j] != '\0')
	{
		putchar(arr[j]);
		j++;
	}
	printf("\n");
 } 
 
 int main()
 {
 	Print();
 	return 0;
 }
