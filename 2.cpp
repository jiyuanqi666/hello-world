#include<stdio.h>
#include<math.h>
#include<windows.h>
int right=0;
int wrong=0;
void add()
{
 int a,b,c;
 a=rand()%100;
 b=rand()%100;
 printf("��ش�\n\t\t %d + %d = ",a,b);
 scanf("%d",&c);
 if(a+b==c)
 {
  printf("�ش���ȷ!\n");
  right++;
 }
 else
 {
  printf("�ش����!\n");
  wrong++;
 }
}
void minu()
{
 int a,b,c;
 a=rand()%100;
 b=rand()%100;
 printf("��ش�\n\t\t %d - %d = ",a,b);
 scanf("%d",&c);
 if(a-b==c)
 {
  printf("�ش���ȷ!\n");
  right++;
 }
 else
 {
  printf("�ش����!\n");
  wrong++;
 }
}
void mul()
{
 int a,b,c;
 a=rand()%100;
 b=rand()%100;
 printf("��ش�\n\t\t %d * %d = ",a,b);
 scanf("%d",&c);
 if(a*b==c)
 {
  printf("�ش���ȷ!\n");
  right++;
 }
 else
 {
  printf("�ش����!\n");
  wrong++;
 }
}
void di()
{
 int a,b,c;
 a=rand()%100;
 b=rand()%100;
 printf("��ش�\n\t\t %d / %d = ",a,b);
 scanf("%d",&c);
 if(a/b==c)
 {
  printf("�ش���ȷ!\n");
  right++;
 }
 else
 {
  printf("�ش����!\n");
  wrong++;
 }
}
void main()
{
 int choise;
 int con=0;
 printf("\n\t\t\t��ӭ����Сѧ������������\n\n");
 while(1)
 {

  printf("\t\t\t  1.�ӷ�����\n");
  printf("\t\t\t  2.��������\n");
  printf("\t\t\t  3.�˷�����\n");
  printf("\t\t\t  4.��������\n");
  printf("\t\t\t  5.�˳�����\n");
  printf("��ѡ��\n");
  if(con==0)
   scanf("%d",&choise);
  switch(choise)
  {
  case 1:
   add();
   break;
  case 2:
   minu();
   break;
  case 3:
   mul();
   break;
  case 4:
   di();
   break;
  case 5:
   return;
  }
  printf("\n\t\t\t1.��������\n");
  printf("\n\t\t\t2.����ѡ��\n");
  printf("\n\t\t\t3.�˳�����\n");
  scanf("%d",&con);
  if(con==1)
   con=1;
  else if(con==2)
   con=0;
  else if(con==3)
   break;
  else
   printf("��Ǹ!���������ָ������!����������!\n");
 }
 printf("���ܹ������ %d ����\n��ȷ %d ��\n���� %d ��\n",right+wrong,right,wrong);
}