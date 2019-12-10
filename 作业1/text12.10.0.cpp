/*扫雷游戏*/

#include <stdio.h>
#include <windows.h>
#include <time.h>

#pragma warning(disable:4996)

#define ROW 10+2
#define COL 10+2
#define MINES 20

void SetMine(char board[][COL], int x, int y);
void ShowBoard(char board[][COL], int row,int col);
int GetMineNum(char board[][COL], int x, int y);


void Game();



 



void Meau()
{
    printf("###############################");
    printf("##### 欢迎来到我的扫雷游戏 ####");
    printf("###############################");
    printf("##### 1.Play       2.Exit  ####");
    printf("###############################");
    printf("Please Select#");

}

int main()
{
    int quit = 0;
    while (!quit)
    {
        void Meau();
        int select = 0;
        scanf("%d\n", &select);
        switch (select)
        {
        case 1:
            Game();
            break;
        case 2:
            quit = 1;
            break;
        default :
            break;
        }
    }
    printf("ByeBye!");
    system("pause");
    return 0;
}


int GetMineNum(char board[][COL], int x, int y)
{
    return board[x - 1][y - 1] + board[x - 1][y] + board[x - 1][y + 1] + board[x][y - 1] \
        + board[x][y + 1] + board[x + 1][y - 1] + board[x + 1][y] + board[x + 1][y + 1] - 8 * '0';
}

void SetMine(char board[][COL], int x, int y)
{
    int n = 0;
    while (n < MINES){
        int x = rand() % 10 + 1;
        int y = rand() % 10 + 1;
        if (board[x][y] == '0'){
            board[x][y] = '1';
            n++;
        }
    }
}

void ShowBoard(char board[][COL], int row, int col)
{
    int i = 1;
    printf("    ");
    for (; i <= 10; i++){
        printf(" %-2d|", i);
    }
    printf("\n");
    for (i=1; i <= 11; i++){
        printf("----");
    }
    printf("\n");
    for (i = 1; i <= 10; i++){
        printf("%2d |",i);
        int j = 1;
        for (j; j <= 10; j++){
            printf(" %c |", board[i][j]);
        }
        printf("\n");
        int k = 1;
        for (k; k <= 11; k++){
            printf("----");
        }
        printf("\n");
    }
}

void Game()
{
    char mine_board[ROW][COL];
    char show_board[ROW][COL];

    memset(mine_board, '0', sizeof(mine_board));
    memset(show_board, '*', sizeof(show_board));
    srand((unsigned long)time(NULL));
    int count = 10 * 10 - MINES;

    SetMine(mine_board, ROW, COL);

    do{
        ShowBoard(show_board, ROW, COL);
        printf("请输入你的排雷坐标 #");
        int x = 0;
        int y = 0;
        scanf("%d %d\n", &x, &y);
        if (x <= 0 || x > 10 || y <= 0 || y > 10)
        {
            printf("输入坐标越界，请重新输入！\n");
            continue;
        }
        if (show_board[x][y] != '*'){
            printf("该位置已经排除，请重新输入！\n");
            continue;
        }
        if (mine_board[x][y] == '1')
        {
            printf("不好意思，你被炸死了！\n");
            break;
        }
        int num = GetMineNum(mine_board, x, y);
        show_board[x][y] = num + '0';
        count--;
    } while (count > 0);
    ShowBoard(mine_board, ROW, COL);
    if (count == 0){
        printf("恭喜你，通关了！\n");
    }
    else {
        printf("不好意思，你被炸死了！\n");
    }
}

