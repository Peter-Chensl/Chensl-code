/*����һ�����������ļ�����*/
#include <stdio.h>
#define NULL 0

struct student
{
	int num;
	char *name;
	int age;
	struct student *next;
};
int main()
{
	struct student a,b,c,*head,*p;
	a.num = 1001;
	a.name = "�";
	a.age = 18;
	b.num = 1002;
	b.name = "����";
	b.age = 19;
	c.num = 1003;
	c.name = "�ƿ�";
	c.age = 20;
	head = &a;
	a.next = &b,
	b.next = &c;
	c.next = NULL;
	p = head;
	do{
		printf("%5d,%s,%3d\n",p->num,p->name,p->age);
		p = p->next;
	}while(p!=NULL);
	return 0;
}
