#include<stdio.h>
//������������ 
int main()
{
	int i = 0;
	int n = 0;
	int f1 =1,f2 = 1;
	printf("����������֪��������(n>=2):");
	scanf("%d",&n);
	for(i = 1;i < n;i++) 
	{
		if(i==1||i==2)
		f1=f2=1;
		printf("%12d%12d",f1,f2);
		if(i%2==0)
		printf("\n");
		f1 = f1+f2;
		f2 = f1+f2;
	}
	return 0;
}
