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
  { //在二叉排序树T上查找关键字为key的结点，成功时返回该结点位置，否则返回NUll
    if(T==NULL||key==T->data) //递归的终结条件
      return T; //T为空，查找失败；否则成功，返回找到的结点位置
    if(key<T->data)
      return SearchBST(T->Lchild,key);
    else
      return SearchBST(T->Rchild,key);//继续在右子树中查找
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
	printf("中序遍历二叉排序树：\n");
	order(T);
	scanf(" %d",&key);
	flag = Searcher(  T,key);
	if(flag == 1)
	{
		printf("查找成功！");
	}
	else printf("查找失败！"); 
	printf("\n请输入要删除的数据:");
	scanf("%d",&s); 
	printf("删除后，中序遍历二叉排序树：\n");
	DeleteBST(&T,s);
	order(T);
	printf("\n");
	return 0;
}
