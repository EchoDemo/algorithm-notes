//在c语言中没有单独一种基本数据类型可以存储字符串（而在c++当中则有string类型），%s为其输出格式

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main()
{//C语言中没有单独一种基本类型可以存储c++中的string类型，只能用字符数组的方式存储。

	char str1[25] = "Wo ai de ren bu ai wo";//用双引号标记；
	char str2[25] = "so sad a story it is.";
	printf("%s\n,%s\n", str1, str2);//使用%s输出字符数组，作为字符串常量；
	system("pause");
    return 0;
}

