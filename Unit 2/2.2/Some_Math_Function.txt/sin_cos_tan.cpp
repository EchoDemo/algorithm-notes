//返回sin,cos,tan的三角函数值



#include "stdafx.h"
#include<cstdio>
#include<cstdlib>
#include<math.h>

const double pi = acos(-1.0);//定义pi作为π常量;

int main()
{
	double db = sin(pi * 45 / 180);//正弦值;	
  double db1 = cos(pi * 45 / 180);//余弦值;	
  double db2 = tan(pi * 45 / 180);//正切值;	
  printf("%f %f %f\n", db,db1,db2);
	system("pause");
	return 0;
}

