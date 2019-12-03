#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef struct BitNode
{
	int data;
	struct BitNode *Lchild,*Rchild;
}BitNode,*Bitree;
int Searcher( Bitree T,int key)
{
	Bitree f;
	Bitree *p;
	if(!T)
	{
		*p = f;
		return FALSE;
	}
	else
	{
	if(key == T->data)
	{
		*p = T;
		return TRUE;
	}
	else if(key > T->data)
	return Searcher(T->Rchild,key);
	else
	return Searcher(T->Lchild,key); 
	}
}
int Insert(Bitree *T,int key)
{
	if(!(*T))
	{
		(*T) = (Bitree)malloc(sizeof(BitNode));
		(*T)->data = key;
		(*T)->Lchild = (*T)->Rchild = NULL;
		return TRUE;
	}
	if(key == (*T)->data)
	return FALSE;
	if(key>(*T)->data)
	return Insert (&((*T)->Rchild),key);
	else 
	return Insert (&((*T)->Lchild),key);
}
void order(Bitree t)
{
	if(t == NULL)
	return ;
	order(t->Lchild);
	printf("%d ",t->data);
	order(t->Rchild);
}
int Delete(Bitree *p)
{
	Bitree q,s;
	if(!(*p)->Lchild && !(*p)->Rchild)
	*p = NULL;
	else if(!(*p)->Lchild)
	{
		q = *p;
		*p = (*p)->Rchild;
		free(q);
	}
	else if(!(*p)->Rchild)
	{
		q = *p;
		*p = (*p)->Lchild;
		free(q);
	}
	else
	{
		q = *p;
		s = (*p)->Lchild;
		while(s->Rchild)
		{
			q = s;
			s = s->Rchild;
		}
		(*p)->data = s->data;
		if(q!=*p)
		q->Rchild = s->Rchild;
		else
		q->Lchild = s->Lchild;
		free(s);
	}
	return TRUE;
}
int DeleteBST(Bitree *T,int key)
{
	if(!(*T))
	return FALSE;
	else
	{
		if( key == (*T)->data)
		Delete(T);
		else if(key < (*T)->data)
		return DeleteBST(&(*T)->Lchild,key);
		else 
		return DeleteBST(&(*T)->Rchild,key);
	}
}
/*BitNode *SearchBST(Bitree T,int key)
  { //�ڶ���������T�ϲ��ҹؼ���Ϊkey�Ľ�㣬�ɹ�ʱ���ظý��λ�ã����򷵻�NUll
    if(T==NULL||key==T->data) //�ݹ���ս�����
      return T; //TΪ�գ�����ʧ�ܣ�����ɹ��������ҵ��Ľ��λ��
    if(key<T->data)
      return SearchBST(T->Lchild,key);
    else
      return SearchBST(T->Rchild,key);//�������������в���
   } //SearchBST*/
int main()
{
	int i;
	int key;
	int flag = 0;
	int n,s;
	int a[10] = {62,88,58,47,35,73,51,99,37,93};
	Bitree T = NULL;
	for( i = 0; i < 10;i++)
	Insert(&T,a[i]);
	printf("�������������������\n");
	order(T);
	scanf(" %d",&key);
	flag = Searcher(  T,key);
	if(flag == 1)
	{
		printf("���ҳɹ���");
	}
	else printf("����ʧ�ܣ�"); 
	printf("\n������Ҫɾ��������:");
	scanf("%d",&s); 
	printf("ɾ�����������������������\n");
	DeleteBST(&T,s);
	order(T);
	printf("\n");
	return 0;
}
