
#include <stdio.h>
#include <math.h>
struct player
{
    float data;
    float score;
}player[100];
void menu()
{
    printf("*********��ӭ�����ƽ����Ϸ�������ѡ��*********\n");
    printf("            1.��ʼ��Ϸ֮��                \n");
    printf("            2.�������˳���Ϸ              \n");
    printf("*********��л��������Ϸ����ӭ�´������� *********\n");
}
void query(int N)
{
    int s,i;
     printf("������Ƿ�Ҫ�鿴�ɼ� (1/0)  \n");
     scanf("%d",&s);
     if( s == 1)
        for (i = 0; i < N; i++)
        {
             printf("���%d�ĳɼ�Ϊ:", i+1);
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
        printf("����������������Ϸ����:");
        scanf("%d", &N);
        printf("����������������Ϸ����:");
        scanf("%d", &t);
        for(i= 0; i < N; i++)
        {
            player[i].score = 0;
        }
        for (j = 0; j < t; j++)// times
        {
            printf("��%d����Ϸ��ʼ��\n",j+1);
                for (i = 0; i < N; i++)
                {
                    printf("�����%d��������:",i+1);
                    scanf("%f", &player[i].data);
                    sum+= player[i].data;
                }
			
                G =(sum*0.618)/N;
                printf("�˴���Ϸ�ƽ��G��ֵΪ�� %f\n",G);
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
            }//����һ��
     }//����times
  printf("������Ƿ�ʼ�µ���Ϸ֮�� (1/0)\n");
                scanf("%d",&s);
                if( s == 1)
                    menu();
}//����main

