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
	printf("请输入哈希表的元素：\n");
	for(i = 0;i<HASHSIZE;i++)
	{
		scanf("%d",&hash_array[i]);
		for(i = 0; i<HASHSIZE;i++)
		{
			insert_hashtable(&hashtable,hash_array[i]);
		}
		printf("哈希表遍历结果为：");
		Display(hashtable);
		printf("\n");
		printf("请输入要查询的数据：");
		scanf("%d",&data);
		int result = search_hashtable(hashtable,data);
		if(result == 1)
		{
			printf("查询失败！");
		 } 
		 else
		 {
		 	printf("带查询数据%d在哈希表的位置为%d",data,result);
		 }
	 } 

}
 int main()
{
	test();
	return 0;
 }

