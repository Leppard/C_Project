#include<stdio.h>
void help()
{
  printf("-o filename          ���ļ�\n\n");
  printf("-h                   ������Ϣ����ʾ���������ĸ�ʽ�ͺ���\n\n");
  printf("-s filename          �����ļ���filenameָ����·�����ļ���\n\n");
  printf("-f stringtofind      ����stringtofind�ַ����������鵽���ַ����ĸ�������Ļ����ʾ����������д���ļ�ѧ��_result.txt��\n\n");
  printf("-r sourcestring targetstring     �滻�ַ��������ļ��е�sourcestring�滻��targetstring,���滻���ٴ���ʾ����Ļ�ϣ������滻�ĸ������滻����ı���д��ѧ��_result.txt��\n\n");
  printf("-d stringtodelete    ɾ���ַ��������ļ��е�stringtodeleteɾ��,��ɾ�����ٴ���ʾ����Ļ�ϣ�����ɾ���ĸ�����ɾ������ı���д��ѧ��_result.txt��\n\n");
  printf("-q                   �˳�����\n\n");
}

