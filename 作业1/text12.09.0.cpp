#include <stdio.h>

 void Plane()
 {
 	int month,c = 0;
 	float j = 1200;
 	printf("���������ɻ����·ݣ�");
 	scanf("%d",&month);
	printf("��ѡ�����Ĳ�λ��ͷ�Ȳ���'1'��ʾ�����ò���'2'��ʾ):");
	scanf("%d",&c);
	if(month<0||month>12)
	{
		printf("������·ݴ������������룺\n");
	 } 
	 else if(month >= 9 && month < 12)
	 {
	 	if(c == 1)
	 	{
	 	printf("��ѡ���������ͷ�Ȳգ����λ�Ʊ��9.5�ۣ�����Ҫ֧���Ľ��Ϊ%.2fԪ\n",j*0.95);
	 	}
	 	else if(c == 2)
	 	{
	 		printf("��ѡ������������òգ����λ����8.5�ۣ�����֧���Ľ��Ϊ%.2fԪ\n",j*0.85);
		 }
	  } 
	  else
	  {
	  	if(c == 1)
	  	{
	  		printf("��ѡ�����̸��ͷ�òգ����λ����5�ۣ�����֧���Ľ��Ϊ%.2fԪ\n",j*0.5);
		  }
		  else if( c == 2)
		  {
		  	printf("��ѡ�����̸�����òգ����λ����2�ۣ�����֧���Ľ��Ϊ%.2fԪ\n",j*0.2);
		   } 
	  }
	  
  } 
  void Operation()
  {
  	float sum , num1,num2;
  	char oper;
  	printf("�������һ�����֣�");
  	scanf("%f",&num1); 
  	printf("������ڶ������֣�");
  	scanf("%f",&num2); 
    printf("��������Ҫ������:");
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
  				printf("���鲻��Ϊ�㣬���������룡\n");
			  }
			  else
			  {
			  	printf("%f%c%f = %f\n",num1,oper,num2,sum);
			  }
  			break;
  		default:
  			printf("�����������������������룡");
  			break;
	  }
  }
 void Limit()
 {
 	int wendday,car;
 	printf("������������ڼ�(������1-7��ʾ):");
 	scanf("%d",&wendday);
 	printf("�����������Ƶ�β��(������0-9��ʾ):");
 	scanf("%d",&car);
 	switch(wendday)
 	{
 		case 1:
 			if(car == 2|| car == 7)
 			printf("����������%d,������ʹ��β����%d����\n",wendday,car);
 			else
 			printf("����������%d,������ʹ��β����%d����\n",wendday,car);
 			break;
 		case 2:
 			if(car == 3|| car == 8)
 			printf("����������%d,������ʹ��β����%d����\n",wendday,car);
 			else
 			printf("����������%d,������ʹ��β����%d����\n",wendday,car);
 			break;
 		case 3:
 		if(car == 4|| car == 9)
 			printf("����������%d,������ʹ��β����%d����\n",wendday,car);
 			else
 			printf("����������%d,������ʹ��β����%d����\n",wendday,car);
 			break;
 		case 4:
 			if(car == 5|| car == 0)
 			printf("����������%d,������ʹ��β����%d����\n",wendday,car);
 			else
 			printf("����������%d,������ʹ��β����%d����\n",wendday,car);
 			break;
 		case 5:
 			printf("����������%d,������ʹ��β����%d����\n",wendday,car);
 			else
 			printf("����������%d,������ʹ��β����%d����\n",wendday,car);
 			break;
 		default:
 			printf("����������%d,������ʹ��β����%d����\n",wendday,car);
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
