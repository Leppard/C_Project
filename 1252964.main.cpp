#include<stdio.h>
void main()
{	
	printf("欢迎使用至尊奢华——LZL文本编辑器V1.0！\n");
	printf("输入-h获取帮助信息\n");
   extern void help();
   extern void open();
   extern void find();
   extern void save();
   extern int dele();
   extern int repl();
 char order[3];
 scanf("%s",order);
 while(order[1]!='q')
{
 switch(order[1])
	{
	case'h':help();break;
	case'o':open();break;
	case'f':find();break;
	case's':save();break;
	case'd':dele();break;
	case'r':repl();break;
	default:printf("输入有误，请重新输入（-h获取帮助）\n");break;

 }
	scanf("%s",order);
 }
}