//使用typedef给复杂的数据类型起一个别名；

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

typedef long long LL;//给long long起个别名LL；

int main()
{
	LL a = 123456789012345LL, b = 234567890123456LL;//直接使用LL来定义long long数据类型；
        printf("%lld\n", a+b);
	system("pause");
        return 0;
}

