#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>
#define NULL 0
#define LEN sizeof(struct txt)
struct txt
{
	char  ch;
struct txt *next;
};
struct txt *head;
void space()
{FILE *fp;
       head=0;    
extern char filename[100];
	int n;
    struct txt *p1,*p2;
	fp=fopen(filename,"r+");
	n=0;
p1=p2=(struct txt*) malloc(LEN);
p1->ch=fgetc(fp);
head=NULL;
while(!feof(fp))
{n=n+1;
if(n==1)head=p1;
else p2->next=p1;
p2=p1;
p1=(struct txt*)malloc(LEN);
p1->ch=fgetc(fp);
}
p2->next=NULL;
}
