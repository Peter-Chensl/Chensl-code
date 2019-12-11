/*链表*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
 } Node,*Pnode;
 
 Node *create(int len)
 {
 	Pnode head = NULL ,tail = NULL,temp = NULL;
 	int i;
 	printf("创建链表！\n");
 	head = (Node *)malloc(sizeof(Node));
 	if(!head)
 	{
 		printf("错误");
 		exit(-1);
	 }
	 head->next = NULL;
	 printf("请输入你的数据！\n");
	 for(i = 0; i < len; i++)
	 {
	 	temp = (Node *)malloc(sizeof(Node));
	 	if(!temp)
	 	{
	 		printf("错误");
	 		exit(-1);
		 }
		 scanf("%d",&temp->data);
		 temp->next = NULL;
		 if(!head->next)
		 {
		 	head->next = temp;
		 }
		 else
		 {
		 	tail->next = temp;
		 }
		 tail = temp;
	 }
	 return head;
 }
 int main()
 {
 	int len;
 	Pnode head;
 	printf("你想要创建多长的链表？\n");
 	scanf("%d",&len);
 	head = create(len);
 	printf("这是全部数据：");
 	while(head->next!=NULL)
 	{
 		printf("%d ",head->next->data);
 		head = head->next;
	 }
 	return 0;
 }
