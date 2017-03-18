//%f是float和double型的输出格式，一般最好使用double型来定义浮点型数据
//是实现两个浮点型数据的和的计算；

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main()
{
	double a = 3.14, b = 0.12;
	double c = a + b;
	printf("%f\n", c);
	system("pause");
    return 0;
}
