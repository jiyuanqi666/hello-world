
#include <stdio.h>
#include <math.h>
struct player
{
    float data;
    float score;
}player[100];
void menu()
{
    printf("*********欢迎来到黄金点游戏，请玩家选择！*********\n");
    printf("            1.开始游戏之旅                \n");
    printf("            2.结束并退出游戏              \n");
    printf("*********感谢您参与游戏，欢迎下次再来！ *********\n");
}
void query(int N)
{
    int s,i;
     printf("玩家您是否要查看成绩 (1/0)  \n");
     scanf("%d",&s);
     if( s == 1)
        for (i = 0; i < N; i++)
        {
             printf("玩家%d的成绩为:", i+1);
             printf("%f\n", player[i].score);
        }
}

int main()
{
    int n, N, m, t, loser, winner, i, j, k,s;
    int  sum=0,max , min ;
    float G;
    char ch;
    menu();
    scanf("%d", &n);
    if (n == 1)
    {
        printf("请玩家您输入参与游戏人数:");
        scanf("%d", &N);
        printf("请玩家您输入参与游戏次数:");
        scanf("%d", &t);
        for(i= 0; i < N; i++)
        {
            player[i].score = 0;
        }
        for (j = 0; j < t; j++)// times
        {
            printf("第%d次游戏开始：\n",j+1);
                for (i = 0; i < N; i++)
                {
                    printf("请玩家%d输入数据:",i+1);
                    scanf("%f", &player[i].data);
                    sum+= player[i].data;
                }
			
                G =(sum*0.618)/N;
                printf("此次游戏黄金点G的值为： %f\n",G);
                min=abs(player[0].data - G);
                max=abs(player[0].data - G);
                for (k = 0; k < N; k++)
                {
                    m = abs(player[k].data - G);
                    if (m>=max)
                    {
                        max = m;
                        loser = k;
                    }
                    if (m <= min)
                    {
                        min = m;
                        winner= k;
                    }
                }
                player[loser].score  += -2;
                player[winner].score  += N;
                query(N);
            }//结束一轮
     }//结束times
  printf("玩家您是否开始新的游戏之旅 (1/0)\n");
                scanf("%d",&s);
                if( s == 1)
                    menu();
}//结束main

