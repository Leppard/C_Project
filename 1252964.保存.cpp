#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct txt
{
	char  ch;
struct txt *next;
};
void save()
{
	extern struct txt;
	extern struct txt *head;
	char name[100];
	struct txt *f2;
	FILE *f1;
	scanf("%s",name);
f1=fopen(name,"w+");
while(f1==NULL)
{printf("�Ҳ�����·�������������룡");
scanf("%s",name);}
f2=head;
char c;
while(f2!=NULL)
{
c=f2->ch;
fputc(c,f1);
f2=f2->next;
}
fclose(f1);
printf("�޸��ļ�����ɹ���\n");
}
