#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>
#define NULL 0
#define LENG sizeof(struct txt)
struct txt
{
	char ch;
struct txt *next;
};
struct txt *begin;
struct txt *pi;
void string()
{
    extern char c[100];
	int n;int l;
    struct txt *p1;
	n=0;l=0;
p1=pi=(struct txt*) malloc(LENG);
p1->ch=c[l];
begin=NULL;
while(c[l]!=0)
{	p1->ch=c[l];
	n=n+1;
if(n==1)begin=p1;
else pi->next=p1;
pi=p1;l++;
p1=(struct txt*)malloc(LENG);
}
free(p1);
p1=NULL;
pi->next=NULL;
}
