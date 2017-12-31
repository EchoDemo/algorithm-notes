

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


注：

1、数组名str前面没有&取地址运算符，因为数组名本身就代表了这个数组的第一个元素的地址，所以不需要再加上取地址符。

2、除了%c外，scanf对其他格式符(如%d)的输入是以空白符(即空格、换行等)为结束判断标志，因此除非使用%C把空格按字符读入，其他情况都会自动跳过空格。另外，字符

数组使用%S读入的时候以空格和换行符为读入结束的标志。

