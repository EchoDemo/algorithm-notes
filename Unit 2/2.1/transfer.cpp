//"\n"代表换行，"\0"代表空字符NULL，其ASCII码为0，

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main()
{
	int num1 = 1, num2 = 2;
	printf("%d\n\n%d", num1, num2);
	printf("%c\n", 7);          //ASCII为7的字符为控制字符，控制响铃功能的控制字符;
	printf("%d%c%d\n", 3, 0, 4);//字符0，是指ASCII为0的空字符NULL;
	system("pause");
    return 0;
}

