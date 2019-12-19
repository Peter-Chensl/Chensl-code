/*������*/
#include <stdio.h>
#include <stdlib.h> 

void BuildMaxHeap(int *heap,int len)
{
	int i;
	int temp;
	for(i = len/2-1;i >= 0;i--)
	{
		if((2*i+1) < len && heap[i] < heap[2*i+1]) //��������������
		{
			temp = heap[i];
			heap[i] = heap[2*i+1];
			heap[2*i+1] = temp;//��齻��������������Ƿ������������ʣ���������������µ��������ṹ
			if((2*(2*i+1)+1<len&&heap[2*i+1]<heap[2*(2*i+1)+1])||(2*(2*i+1)+2<len&&heap[2*i+1]<heap[2*(2*i+1)+2])) 
			{
				BuildMaxHeap(heap,len);
			}
			if((2*i+2)<len&&heap[i]<heap[2*i+2])//���ڵ����������
			{
				temp = heap[i];
				heap[i] = heap[2*i+2];
				heap[2*i+2] = temp;
				if ((2*(2*i+2)+1 < len && heap[2*i+2] < heap[2*(2*i+2)+1]) || (2*(2*i+2)+2 < len && heap[2*i+2] < heap[2*(2*i+2)+2]))
				{
					BuildMaxHeap(heap,len);
				}
			 } 
		 } 
	}
}
void Swap(int *heap,int len)
{
	int temp;
	temp = heap[0];
	heap[0] = heap[len-1];
	heap[len-1] = temp;
}
int main()
{
	int a[6] = {0};
	int len = sizeof(a)/sizeof(a[0]);
	int i;
	printf("������%d�����֣�",len);
	for( i = 0; i < len;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i = len;i>0;i--)
	{
		BuildMaxHeap(a,i);
		Swap(a,i);
	}
	for(i = 0; i < len; i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
