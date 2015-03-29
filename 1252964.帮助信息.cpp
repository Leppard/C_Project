#include<stdio.h>
void help()
{
  printf("-o filename          打开文件\n\n");
  printf("-h                   帮助信息，提示各个参数的格式和含义\n\n");
  printf("-s filename          保存文件到filename指定的路径和文件名\n\n");
  printf("-f stringtofind      查找stringtofind字符串，并将查到的字符串的个数在屏幕上显示，并将个数写到文件学号_result.txt中\n\n");
  printf("-r sourcestring targetstring     替换字符串，将文件中的sourcestring替换成targetstring,将替换多少处显示在屏幕上，并将替换的个数和替换后的文本都写道学号_result.txt中\n\n");
  printf("-d stringtodelete    删除字符串，将文件中的stringtodelete删除,将删除多少处显示在屏幕上，并将删除的个数和删除后的文本都写到学号_result.txt中\n\n");
  printf("-q                   退出程序\n\n");
}

