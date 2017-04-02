/*
浮点数在计算机中的存储并不总是精确地，"=="是完全相同才能进行判定为TRUE;

const double Pi=acos(-0.1);//圆周率；
#define Equ(a,b) ((fabs((a)-(b)))<(eps))//等于
#define More(a,b) (((a)-(b))>(eps))
#define Less(a,b) (((a)-(b))<(-eps))
#define MoreEqu(a,b) (((a)-(b))>(-eps))
#define LessEqu(a,b) (((a)-(b))<(eps))
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>
#include<cmath>

const double eps = 1e-8;//定义为常量；
#define Equ(a,b) ((fabs((a)-(b)))<(eps)) //宏定义；

int main() {
	double db = 1.23;
	if (Equ(db, 1.23)) {
		printf("true\n");
	}
	else {
		printf("false\n");
	}
	system("pause");
	return 0;
}
