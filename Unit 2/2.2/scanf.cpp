

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main()
{
	int a;
	char c,str[10];
	scanf("%d%c%s",&a,&c, str);
	printf("a=%d,c=%c,str=%s\n",a,c,str);//对%d,%f等其他格式符和字符数组使用%s读入的时候以空格和换行行为读入结束标志,而%c是可以读入空格和换行的
	system("pause");
  return 0;
}

