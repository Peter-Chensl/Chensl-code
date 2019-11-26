 #include<stdio.h>
 int main()
 {
 	int a = 0,b = 0,c = 0;
 	int count = 0;
 	printf("请输入一个整数：\n");
 	scanf ("%d",&a);
 	for(b = 3;b<10000;b++)
 	{
 	for(c = 4;c<10000;c++)
 	{
 		if(b+c<=a)
 		continue;
 		if(c<=b)
 		continue;
 		if(a*a==b*b+c*c)
 		{
 			count++;
		 }
	 }
	}
	printf("直角三角形的个数："); 
	printf("%d",count);
 	return 0;
 }
