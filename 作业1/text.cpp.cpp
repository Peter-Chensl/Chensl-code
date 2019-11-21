#include<stdio.h>
#include<stdlib.h>

#define MaxVex 100 //最多顶点个数
#define INFINITY 32768  // 表示极大值
#define TURE 1
#define FALSE 0
#define OK  1
#define ERROR  0

typedef char VertexType; //假设顶点数据类型为字符类型 
typedef int EdgeType;  // 对于无权图，用1或0表示是否相邻，对带权图，则为权值类型
typedef struct
{
	VertexType vertex[MaxVex];  //顶点数组
	EdgeType arcs[MaxVex][MaxVex]; //邻接矩阵
	int vexnum,arcnum;     //图中的定点数和边数 
 } Graph;
 
 int visited[MaxVex]; //访问标志数组
 void init(Graph *G); //初始化邻接矩阵
 int LocateVertex(Graph *G,VertexType v);//求顶点位置函数
 int createUDG(Graph *G);
 void DepthFirstSearch(Graph G,int i);//图的深度优先遍历
 void TraverseGraph(Graph G);
 
 int main()
 {
 	Graph G;
 	int choice;
 	while (true)
 	{
 		printf("****************请输入您的选择********************************\n");
 		printf("*                1.图的初始化                                 *\n");
  		printf("*                2.创创建                                     *\n");
 		printf("*                3.按深度遍历                                 *\n");
 		printf("*                0.退出程序                                   *\n");
 		printf("***************************************************************\n");
 		scanf("%d",&choice);
 		switch(choice)
 		{
 			case 1:
 				init(&G);
 				break;
 			case 2:
 				(createUDG(&G)==1)?printf("成功创建图！\n"):printf("创建图失败！\n");
 				break;
 			case 3:
 				printf("图的深度优先遍历为：");
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
  void init(Graph *G) //初始化邻接矩阵
  {
  	int i , j;
  	printf("请输入图的顶点个数和边数：\n");
  	scanf("%d%d",&(G->vexnum),&(G->arcnum));
  	for(i = 0;i<G->vexnum;i++)
  	{
  		for(j = 0;j<G->vexnum;j++)
  		{
  			G->arcs[i][j] = INFINITY;
		  }
	  }
	  printf("图的初始化成功\n");
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
			printf("请输入图的第%d顶点：",i+1);
			getchar();
			scanf("%c",&(G->vertex[i]));
		}
		for(k = 0;k<G->arcnum;k++)
		{
			printf("请分别输入图的第%d条边的两个顶点和权值",k+1);
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
