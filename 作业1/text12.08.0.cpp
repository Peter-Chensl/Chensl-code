#include <stdio.h>

int main()
{
	int year,month;
	printf("��������ݣ�");
	scanf("%d",&year);
	printf("�������·�:");
	scanf("%d",&month);
	if(month > 12||month < 0)
	{
		printf("�·�������������������");
		
	}
	if(year < 0)
	{
		printf("��������������������룡");
		
	}
	  switch (month) {
        case 4:case 6:case 9:case 11:
            printf("%d��%d����30��\n",year,month);
            break;
        case 2:
            if((year%4==0&&year%100!=0)||(year%400==0)){
                printf("%d��%d����29��\n",year,month);
           }else{
               printf("%d��%d����28��\n",year,month);
            }
           break;
       default:
            printf("%d��%d����31��\n",year,month);
            break;
  }
}
