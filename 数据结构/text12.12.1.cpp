#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node *next;
 }LinkList;
 LinkList *InitList(LinkList *L)//初始化链表 
 {
 	L = (LinkList *)malloc(sizeof(LinkList));
 	L->next = NULL;
	return L; 
 }
 LinkList *CreateList(int n)//创建单链表
 {
 	int x,i;
 	LinkList *L,*r,*p;
 	L = InitList(L);//构造头结点
	 r = L;
	 printf("请输入%d个值：",n);
	 for(i = 0;i<n;i++)
	 {
	 	scanf("%d",&x);
	 	p = (LinkList *)malloc(sizeof(LinkList));
	 	p->data = x;
	 	p->next = NULL;
	 	r->next = p;
	 	r = r->next;
	  } 
	  return L;
  } 
  int Insert(LinkList *L,int item,int x)
  {
  	int i = 1;
  	LinkList *p, *t;
  	t = (LinkList *)malloc(sizeof(LinkList));
  	t->data = item;
  	if(L->next == NULL)
  	{
  		if(x == 1)
  		{
  			L->next = t;
  			t->next = NULL;
  			return 1;
		  }
		  else
		  {
		  	printf("错误！\n");
		  	return 0;
		  }
	  }
	  while(p->next != NULL&&i<x)
	  {
	  	p = p->next;
	  	i++;
	  }
	  if(p->next == NULL&&i<x)
	  {
	  	printf("The node %d is not exit\n",x);
	  	return 0;
	  }
	  else
	  {
	  	t->next = p->next;
	  	p->next = t;
		return 1; 
	  }
  }
  int Insert2(LinkList *L,int item,int k)
  {
  	LinkList *q,*p,*t;
  	t = (LinkList *)malloc(sizeof(LinkList));
  	t->data = item;
  	if(L->next == NULL)
  	{
  		printf("The linklist is empty!\n");
  		return 0;
	  }
	  else
	  {
	  	q = L;
	  	p = L->next;
	  	while(p->next != NULL)
	  	{
	  		if(p->data != k)
	  		{
	  		q = p;
	  		p = p->next; 
		   } 
		   else 
		   break;
	   } 
	   if(p == NULL)
	   {
	   	printf("The node %d is not exist!\n",k);
	   	return 0;
		} 
		else
		{
			q->next = t;
			t->next = p;
			return 1;
		}
  }

void output(LinkList *L)
{
	LinkList *p;
    p = L->next;
    printf("output element: \n");
    for(;p!=NULL;p=p->next)
    {
        printf(" %d ",p->data);
    }
    printf("\n");
}

  int main()
  {
  	int x = 5;
  	LinkList *L;
  	L = Create(x);
  	output(L);
  	Insert(L,3,2);
  	output(L);
  	Insert2(L,3,4);
  	output(L);
  	return 0;
  }
