/*建立一个有三个结点的简单链表：*/
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
	a.name = "李华";
	a.age = 18;
	b.num = 1002;
	b.name = "刘星";
	b.age = 19;
	c.num = 1003;
	c.name = "黄克";
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
