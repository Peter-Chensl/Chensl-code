/*堆排序*/
#include <stdio.h>
#include <stdlib.h> 

void BuildMaxHeap(int *heap,int len)
{
	int i;
	int temp;
	for(i = len/2-1;i >= 0;i--)
	{
		if((2*i+1) < len && heap[i] < heap[2*i+1]) //根结点大于左子树
		{
			temp = heap[i];
			heap[i] = heap[2*i+1];
			heap[2*i+1] = temp;//检查交换后的左右子树是否满足最大堆性质，如果不满足则重新调整子树结构
			if((2*(2*i+1)+1<len&&heap[2*i+1]<heap[2*(2*i+1)+1])||(2*(2*i+1)+2<len&&heap[2*i+1]<heap[2*(2*i+1)+2])) 
			{
				BuildMaxHeap(heap,len);
			}
			if((2*i+2)<len&&heap[i]<heap[2*i+2])//根节点大于右子树
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
	printf("请输入%d个数字：",len);
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
