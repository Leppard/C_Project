#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct txt
{
	char  ch;
struct txt *next;
};
void find()
{
	extern struct txt;
    struct txt *f1,*f2;
    extern struct txt *head;
	extern void space();
	extern char way[100];
	space();
char a[100];
scanf("%s",a);
char b[100];
int i=0,len;int n;
f1=head;f2=f1;
while(a[i]!=0)
{
	i++;
}
len=i;
for(n=0;f1!=NULL;f1=f1->next)
{	i=0;
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
	if(i==len) n++; 
}
printf("%d\n",n);
FILE *f3;
f3=fopen(way,"a");
if(f3==NULL)f3=fopen(way,"w+");
fprintf(f3,"-f%d\n\n\n",n);
fclose(f3);

f2=head;
while(f2!=NULL)
{
	f1=f2->next;
   free(f2);
f2=f1;
}
}