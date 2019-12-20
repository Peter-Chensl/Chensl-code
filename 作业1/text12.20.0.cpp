#include <stdio.h>
#include <stdlib.h>
#define HASHSIZE 7
#define NULLKEY -32768
#define OK 1
#define EEOR 0
typedef struct hashtable
{
	int *elem;
	int count;
}HashTable;
int Hash_fun(int data)
{
	return (data%HASHSIZE);
}
void Init(HashTable**hashtable)
{
	int m = HASHSIZE;
	int i;
	(*hashtable)->elem = (int *)malloc(sizeof(int )*m);
	(*hashtable)->count = m;
	for(i = 0;i<m;i++)
	{
		(*hashtable)->elem[i]=NULLKEY;
	}
}
void insert_hashtable(HashTable**hashtable,int data)
{
	int hashadderss;
	hashadderss = Hash_fun(data);
	while((*hashtable)->elem[hashadderss]!=NULLKEY)
	{
		hashadderss = (++hashadderss)%HASHSIZE;
	}
	(*hashtable)->elem[hashadderss]%HASHSIZE;
}
int search_hashtable(HashTable*hashtable,int data)
{
	int hashadderss = Hash_fun(data);
	while(hashtable->elem[hashadderss]!=data)
	{
		hashadderss = (++hashadderss)%HASHSIZE;
		if(hashtable->elem[hashadderss]==NULLKEY||hashadderss == Hash_fun(data))
		{
			return -1;
		}
	}
	return hashadderss;
}
void Display(HashTable*hashtable)
{
	int i;
	for(i = 0;i<hashtable->count;i++)
	{
		printf("%d\t",hashtable->elem[i]);
	}
}
void test()
{
	HashTable *hashtable;
	int i;
	int data;
	hashtable = (HashTable*)malloc(sizeof(HashTable));
	Init(&hashtable);
	int hash_array[HASHSIZE];
	printf("�������ϣ���Ԫ�أ�\n");
	for(i = 0;i<HASHSIZE;i++)
	{
		scanf("%d",&hash_array[i]);
		for(i = 0; i<HASHSIZE;i++)
		{
			insert_hashtable(&hashtable,hash_array[i]);
		}
		printf("��ϣ��������Ϊ��");
		Display(hashtable);
		printf("\n");
		printf("������Ҫ��ѯ�����ݣ�");
		scanf("%d",&data);
		int result = search_hashtable(hashtable,data);
		if(result == 1)
		{
			printf("��ѯʧ�ܣ�");
		 } 
		 else
		 {
		 	printf("����ѯ����%d�ڹ�ϣ���λ��Ϊ%d",data,result);
		 }
	 } 

}
 int main()
{
	test();
	return 0;
 }

