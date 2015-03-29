#include <stdio.h>
#include<stdlib.h>
		char filename[100];char way[100];
void open()
{
 scanf("%s",filename);
 FILE *fp;
fp=fopen(filename,"r+");
if(fp==NULL)
{printf("找不到文件！请确认路径后输入！\n");
}
else
	{printf("文件打开成功！\n");
int z=99;
while(filename[z]!='\\') z=z-1;
int u;
for(u=z;u>=0;u--)
way[u]=filename[u];
char name[]={"1252964_result.txt"};
int m;
for(m=0;m<19;m++)
	way[z+m+1]=name[m];}
}
