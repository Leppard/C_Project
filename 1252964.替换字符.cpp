#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct txt
{
	char  ch;
struct txt *next;
};
char c[100];
int repl()
{
	extern struct txt;
	struct txt *f1,*f2,*f3;
    extern struct txt *head;
	extern struct txt *begin;
	extern struct txt *pi;
	extern void space();
	extern void string();
    extern char way[100];

	space();
	char a[100];
	scanf("%s%s",a,c);
	char b[100];
int i=0,len;int n;
f1=head;f2=f1,f3=f1;
while(a[i]!=0)
{
	i++;
}
len=i;
int q=0;
for(n=0;f1!=NULL;f1=f1->next)
{	
	if(q>1)f3=f3->next;
	i=0;
	f2=f1;
	while(f2!=NULL&&i<len)
{
	b[i]=f2->ch;
	f2=f2->next;
	i++;
}
	i=0;
	while(a[i]==b[i])
	{
		i++;
	}
	if(i==len)
		{
			    string();
			f3->next=begin;
			pi->next=f2;
			f3=pi;
			f1=f2;
			n++;
	}q++;
}if(n==0){
	printf("\n�Ҳ������ַ����������������������룡\n");
	return(0);}
printf("%d\n",n);
FILE *f4;
f4=fopen(way,"a");
if(f4==NULL)f4=fopen(way,"w+");
fprintf(f4,"-r%d\n",n);
f1=head;
char d;
while(f1!=NULL)
{
d=f1->ch;
fputc(d,f4);
f1=f1->next;
}
fprintf(f4,"\n\n\n");
fclose(f4);
}