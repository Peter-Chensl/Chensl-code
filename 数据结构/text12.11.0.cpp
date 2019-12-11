/*����*/
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
 	printf("��������\n");
 	head = (Node *)malloc(sizeof(Node));
 	if(!head)
 	{
 		printf("����");
 		exit(-1);
	 }
	 head->next = NULL;
	 printf("������������ݣ�\n");
	 for(i = 0; i < len; i++)
	 {
	 	temp = (Node *)malloc(sizeof(Node));
	 	if(!temp)
	 	{
	 		printf("����");
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
 	printf("����Ҫ�����೤������\n");
 	scanf("%d",&len);
 	head = create(len);
 	printf("����ȫ�����ݣ�");
 	while(head->next!=NULL)
 	{
 		printf("%d ",head->next->data);
 		head = head->next;
	 }
 	return 0;
 }
