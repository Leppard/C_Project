#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct txt
{
	char  ch;
struct txt *next;
};
int dele()
{
	extern struct txt;
    struct txt *f1,*f2,*f3;
    extern struct txt *head;
	extern void space();
	extern char way[100];
	space();
char a[100];
scanf("%s",a);
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
			f3->next=f2;
	        f1=f2;
			n++;
	     }
	q++;	
};
if(n==0){
	printf("\n找不到该字符串或输入有误，请重新输入！\n");
	return(0);}
printf("%d\n",n);
FILE *f4;
f4=fopen(way,"a");
if(f4==NULL)f4=fopen(way,"w+");
fprintf(f4,"-d%d\n",n);
f1=head;
char c;
while(f1!=NULL)
{
c=f1->ch;
fputc(c,f4);
f1=f1->next;
}
fprintf(f4,"\n\n\n");
fclose(f4);
}