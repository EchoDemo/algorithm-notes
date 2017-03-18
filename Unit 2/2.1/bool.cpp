//整型常量在赋值给布尔型变量时会自动转换为true(非零),false(零),true和false在存储时分别为1和0.

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>
#include<cstdbool>//如果文件名没有改为cpp则需要加上#include<stdbool.h>文件头;

int main()
{
	bool flag1 = 0, flag2 = true;
	int a = 1, b = 1;
	printf("%d %d %d\n",flag1,flag2,a==b);
	system("pause");
    return 0;
}

