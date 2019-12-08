#include <stdio.h>

int main()
{
	int year,month;
	printf("请输入年份：");
	scanf("%d",&year);
	printf("请输入月份:");
	scanf("%d",&month);
	if(month > 12||month < 0)
	{
		printf("月份输入有误，请重新输入");
		
	}
	if(year < 0)
	{
		printf("年份输入有误，请重新输入！");
		
	}
	  switch (month) {
        case 4:case 6:case 9:case 11:
            printf("%d年%d月有30天\n",year,month);
            break;
        case 2:
            if((year%4==0&&year%100!=0)||(year%400==0)){
                printf("%d年%d月有29天\n",year,month);
           }else{
               printf("%d年%d月有28天\n",year,month);
            }
           break;
       default:
            printf("%d年%d月有31天\n",year,month);
            break;
  }
}
