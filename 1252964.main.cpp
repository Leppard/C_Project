#include<stdio.h>
void main()
{	
	printf("��ӭʹ�������ݻ�����LZL�ı��༭��V1.0��\n");
	printf("����-h��ȡ������Ϣ\n");
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
	default:printf("�����������������루-h��ȡ������\n");break;

 }
	scanf("%s",order);
 }
}