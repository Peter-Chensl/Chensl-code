#include <stdio.h>

 void Plane()
 {
 	int month,c = 0;
 	float j = 1200;
 	printf("请输入坐飞机的月份：");
 	scanf("%d",&month);
	printf("请选择您的舱位（头等舱用'1'表示，经济舱用'2'表示):");
	scanf("%d",&c);
	if(month<0||month>12)
	{
		printf("输入的月份错误，请重新输入：\n");
	 } 
	 else if(month >= 9 && month < 12)
	 {
	 	if(c == 1)
	 	{
	 	printf("您选择的是旺季头等舱，本次机票打9.5折，所需要支付的金额为%.2f元\n",j*0.95);
	 	}
	 	else if(c == 2)
	 	{
	 		printf("您选择的是旺季经济舱，本次基表打8.5折，所需支付的金额为%.2f元\n",j*0.85);
		 }
	  } 
	  else
	  {
	  	if(c == 1)
	  	{
	  		printf("您选择的是谈季头济舱，本次基表打5折，所需支付的金额为%.2f元\n",j*0.5);
		  }
		  else if( c == 2)
		  {
		  	printf("您选择的是谈季经济舱，本次基表打2折，所需支付的金额为%.2f元\n",j*0.2);
		   } 
	  }
	  
  } 
  void Operation()
  {
  	float sum , num1,num2;
  	char oper;
  	printf("请输入第一个数字：");
  	scanf("%f",&num1); 
  	printf("请输入第二个数字：");
  	scanf("%f",&num2); 
    printf("请输入你要的运算:");
    scanf(" %c",&oper);
  	switch(oper)
  	{
  		case '+':
  			sum = num1 + num2;
  			printf("%f%c%f = %f\n",num1,oper,num2,sum);
  			break;
  		case '-':
  			sum = num1 - num2;
  			printf("%f%c%f = %f\n",num1,oper,num2,sum);
  			break;
  		case '*':
  			sum = num1 * num2;
  			printf("%f%c%f = %f\n",num1,oper,num2,sum);
  			break;
  		case '/':
  			sum = num1 / num2;
  			if(num2 == 0)
  			{
  				printf("出书不能为零，请重新输入！\n");
			  }
			  else
			  {
			  	printf("%f%c%f = %f\n",num1,oper,num2,sum);
			  }
  			break;
  		default:
  			printf("输入的运算符有误，请重新输入！");
  			break;
	  }
  }
 void Limit()
 {
 	int wendday,car;
 	printf("请输入今天星期几(用数字1-7表示):");
 	scanf("%d",&wendday);
 	printf("请输入您车牌的尾号(用数字0-9表示):");
 	scanf("%d",&car);
 	switch(wendday)
 	{
 		case 1:
 			if(car == 2|| car == 7)
 			printf("今天是星期%d,您不能使用尾号是%d车辆\n",wendday,car);
 			else
 			printf("今天是星期%d,您不能使用尾号是%d车辆\n",wendday,car);
 			break;
 		case 2:
 			if(car == 3|| car == 8)
 			printf("今天是星期%d,您不能使用尾号是%d车辆\n",wendday,car);
 			else
 			printf("今天是星期%d,您不能使用尾号是%d车辆\n",wendday,car);
 			break;
 		case 3:
 		if(car == 4|| car == 9)
 			printf("今天是星期%d,您不能使用尾号是%d车辆\n",wendday,car);
 			else
 			printf("今天是星期%d,您不能使用尾号是%d车辆\n",wendday,car);
 			break;
 		case 4:
 			if(car == 5|| car == 0)
 			printf("今天是星期%d,您不能使用尾号是%d车辆\n",wendday,car);
 			else
 			printf("今天是星期%d,您不能使用尾号是%d车辆\n",wendday,car);
 			break;
 		case 5:
 			printf("今天是星期%d,您不能使用尾号是%d车辆\n",wendday,car);
 			else
 			printf("今天是星期%d,您不能使用尾号是%d车辆\n",wendday,car);
 			break;
 		default:
 			printf("今天是星期%d,您不能使用尾号是%d车辆\n",wendday,car);
 			break;
	 }
 }
  int main()
  {
  	Plane();
  	Operation();
  	Limit();
  	return 0;
   } 
