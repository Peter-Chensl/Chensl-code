#include<stdio.h>
#include<stdlib.h>

#define MaxVex 100 //��ඥ�����
#define INFINITY 32768  // ��ʾ����ֵ
#define TURE 1
#define FALSE 0
#define OK  1
#define ERROR  0

typedef char VertexType; //���趥����������Ϊ�ַ����� 
typedef int EdgeType;  // ������Ȩͼ����1��0��ʾ�Ƿ����ڣ��Դ�Ȩͼ����ΪȨֵ����
typedef struct
{
	VertexType vertex[MaxVex];  //��������
	EdgeType arcs[MaxVex][MaxVex]; //�ڽӾ���
	int vexnum,arcnum;     //ͼ�еĶ������ͱ��� 
 } Graph;
 
 int visited[MaxVex]; //���ʱ�־����
 void init(Graph *G); //��ʼ���ڽӾ���
 int LocateVertex(Graph *G,VertexType v);//�󶥵�λ�ú���
 int createUDG(Graph *G);
 void DepthFirstSearch(Graph G,int i);//ͼ��������ȱ���
 void TraverseGraph(Graph G);
 
 int main()
 {
 	Graph G;
 	int choice;
 	while (true)
 	{
 		printf("****************����������ѡ��********************************\n");
 		printf("*                1.ͼ�ĳ�ʼ��                                 *\n");
  		printf("*                2.������                                     *\n");
 		printf("*                3.����ȱ���                                 *\n");
 		printf("*                0.�˳�����                                   *\n");
 		printf("***************************************************************\n");
 		scanf("%d",&choice);
 		switch(choice)
 		{
 			case 1:
 				init(&G);
 				break;
 			case 2:
 				(createUDG(&G)==1)?printf("�ɹ�����ͼ��\n"):printf("����ͼʧ�ܣ�\n");
 				break;
 			case 3:
 				printf("ͼ��������ȱ���Ϊ��");
 				TraverseGraph(G);
 				break;
 			case 0:
 			    exit(0);
 			    break;
 			defalult:
 				printf("ERROR!!\n");
 				break;
		 }
	 }
	 return 0;
  } 
  void init(Graph *G) //��ʼ���ڽӾ���
  {
  	int i , j;
  	printf("������ͼ�Ķ�������ͱ�����\n");
  	scanf("%d%d",&(G->vexnum),&(G->arcnum));
  	for(i = 0;i<G->vexnum;i++)
  	{
  		for(j = 0;j<G->vexnum;j++)
  		{
  			G->arcs[i][j] = INFINITY;
		  }
	  }
	  printf("ͼ�ĳ�ʼ���ɹ�\n");
   } 
   int LocateVertex(Graph *G,VertexType v)
   {
   	int j = 0,k;
   	for(k = 0;k<G->vexnum;k++)
   	{
   		if(G->vertex[k]==v)
   		{
   			j = k;
   			break;
		   }
	   }
	   return j;
	} 
	int createUDG(Graph *G)
	{
		int i , j , k,weight;
		VertexType v1,v2;
		for(i = 0;i<G->vexnum;i++)
		{
			printf("������ͼ�ĵ�%d���㣺",i+1);
			getchar();
			scanf("%c",&(G->vertex[i]));
		}
		for(k = 0;k<G->arcnum;k++)
		{
			printf("��ֱ�����ͼ�ĵ�%d���ߵ����������Ȩֵ",k+1);
			getchar();
			scanf("%c %c %d",&v1,&v2,&weight);
			i = LocateVertex(G,v1);
			j = LocateVertex(G,v2);
			G->arcs[i][j] = weight;
			G->arcs[j][i] = weight;
		}
		return OK;
	}
	void DepthFirstSearch(Graph G,int i)
	{
		int j;
		visited[i] = TURE;
		printf("%c ",G.vertex[i]);
		for(j = 0;j<G.vexnum;j++)
		{
			if(G.arcs[i][j] != INFINITY && !visited[j])
				DepthFirstSearch(G,j);
		}
	}
	void TraverseGraph(Graph G)
	{
		int i;
		for(i = 0;i<G.vexnum;i++)
		{
			if(!visited[i])
			  DepthFirstSearch(G,i);
		}
		printf("\n"); 
	}
