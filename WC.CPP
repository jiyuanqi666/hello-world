#include "iostream"
#include "string"
#include "stdio.h"
 
using namespace std;
 
FILE *file;
int chars=0,words=0,lines=1,symbols=0,s[500];
char c;
//����ȫ�ֱ���

void index()
{
      cout<<"                ********************���˵�*********************"<<endl;
      cout<<"                *                                          *"<<endl;
      cout<<"                *         1����ʾ�ַ�����������������      *"<<endl;
      cout<<"                *                                          *"<<endl;
      cout<<"                *         2����ʾ������                    *"<<endl;
      cout<<"                *                                          *"<<endl;
      cout<<"                *         3����ʾ�������з���              *"<<endl;
      cout<<"                *                                          *"<<endl;
      cout<<"                *         4����ʾ����                      *"<<endl;
      cout<<"                *                                          *"<<endl;
      cout<<"                *         5���˳�                           *"<<endl;
      cout<<"                *                                          *"<<endl;
      cout<<"                ***********************************************"<<endl;
      cout<<"                * ��ѡ����Ҫ�Ĺ��ܣ�";
  }//���˵�����
  
  void analyse()
  {
      while((c=fgetc(file))!=EOF) 
      {
          chars++;
          if (((c<='z')&&(c>='a'))||((c<='Z')&&(c>='A'))||((c>='0')&&(c<='9')))
          {
              words++;
              while((c=fgetc(file))!=EOF)
              {    
                  chars++;
                  if (((c<='z')&&(c>='a'))||((c<='Z')&&(c>='A'))||((c>='0')&&(c<='9')))
                  {
                  }
                 else if (c=='\n')
                 {
                      s[lines]=1;
                      lines++;
                      break;
                  }
                  else if (c==' ')
                      break;
                  else
                  {
                      symbols++;
                      break;
                  }
              }
          }
          else if (c=='/')
          {
              if ((c=fgetc(file))=='/')
              {
                  symbols+=2;
                  s[lines]=2;
                  fseek(file,-1L,SEEK_CUR);
              }
         }
         else if (c=='\n')
          {
              if (s[lines]!=2)
                  s[lines]=1;
              lines++;    
          }
          else if (c==' ')
          {
          }
          else
              symbols++;
      }
      if (s[lines]!=2)
          s[lines]=1;
  }//���������ַ�����������������������ĺ���
 
int main ()
{
      char name[30],b;
      int a,i,j;
      cout<<"                * ������Դ�ļ���:";
      for(;;)
      {
          cin>>name;
          if((file=fopen(name,"r"))!=NULL) 
              break;
          else 
              cout<<"                * �ļ�·����������������Դ�ļ���:";
      }
      analyse();
      fclose(file);
      index();
     cin>>a;
     while (a!=5)
     {
         switch (a)
         {
             case 1:cout<<"                * �ַ�����"<<chars<<endl;
                    cout<<"                * ��������"<<words<<endl;
                    cout<<"                * ����  ��"<<lines<<endl;
                    cout<<"                * ����������أ�";
                    b=getchar();
                    b=getchar();
                    break;
             case 2:cout<<"                * ��������"<<symbols<<endl;
                    cout<<"                * ����������أ�";
                    b=getchar();
                    b=getchar();
                    break;
             case 3:cout<<"                * ������"<<lines<<endl;
                       if (s[i]==1)
                  {
                            if (i<10)
                                cout<<"                * ��"<<i<<"��Ϊ   ������"<<endl;
                            else if (i<100)
                                cout<<"                * ��"<<i<<"��Ϊ  ������"<<endl;
                            else
                                cout<<"                * ��"<<i<<"��Ϊ ������"<<endl;
                        }
                        else if (s[i]==2)
                        {
                            if (i<10) 
                                cout<<"                * ��"<<i<<"��Ϊ   ע����"<<endl;
                            else if (i<100)
                                cout<<"                * ��"<<i<<"��Ϊ  ע����"<<endl;
                            else
                                cout<<"                * ��"<<i<<"��Ϊ ע����"<<endl;
                        }
                    
                    cout<<"                * ����������أ�";
                    b=getchar();
                    b=getchar();
                    break;
             case 4:cout<<"                * �ַ�����"<<chars<<endl;
                    cout<<"                * ��������"<<words<<endl;
                    cout<<"                * ��������"<<symbols<<endl;
                    cout<<"                * ����  ��"<<lines<<endl;
                    for (j=1;j<=lines;j++)
                    {
                      if (s[j]==1)
                       {
                            if (j<10)
                                cout<<"                * ��"<<j<<"��Ϊ   ������"<<endl;
                            else if (j<100)
                                cout<<"                * ��"<<j<<"��Ϊ  ������"<<endl;
                            else
                                cout<<"                * ��"<<j<<"��Ϊ ������"<<endl;
                        }
                        else if (s[j]==2)
                        {
                            if (j<10)
                                cout<<"                * ��"<<j<<"��Ϊ   ע����"<<endl;
                            else if (j<100)
                                cout<<"                * ��"<<j<<"��Ϊ  ע����"<<endl;
                            else
                                cout<<"                * ��"<<j<<"��Ϊ ע����"<<endl;
                        }
                    }
                    cout<<"                * ����������أ�";
                    b=getchar();
                    b=getchar();
                    break;
         }
         system("cls");
         index();
         cin>>a;
}
     return 0;
 }//������