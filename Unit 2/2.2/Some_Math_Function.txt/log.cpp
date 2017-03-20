//log()用于返回double类型变量的以e为底的对数，log10()则返回以10为底的对数;



#include "stdafx.h"
#include<cstdio>
#include<cstdlib>
#include<math.h>

int main()
{
	double db = log(1.0);
	double db1 = log(3);
	double db2 = log10(100);
	printf("%f %f %f\n", db,db1,db2);
	system("pause");
	return 0;
}

