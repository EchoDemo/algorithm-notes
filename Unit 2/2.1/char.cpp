//常用的ASCII码的数值范围（0~9）（48~57）、（A~Z）（65~90）、（a~z）（97~122）

//字符常量（必须是单个字符）必须用单引号标注，
//没有用单引号标注的一定范围的整数会被识别为ASCII值所对应的的字符。

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main()
{
	char c1 = 'k', c2 = 'l', c3 = 116;
	printf("%c%c%c\n", c1, c2, c3);
	system("pause");
    return 0;
}

