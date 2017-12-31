

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main()
{
	char c1, c2,c3;
	c1 = getchar();
	getchar();//并没有进行存储，
        c2 = getchar();
	c3 = getchar();
	putchar(c1);
	putchar(c2);
	putchar(c3);
	system("pause");
        return 0;
}

