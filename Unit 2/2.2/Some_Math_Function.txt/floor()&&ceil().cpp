//向上与向下取整函数floor(double),ceil(double)

#include "stdafx.h"
#include<cstdio>
#include<cstdlib>
#include<math.h>

int main()
{
	double db1 = -5.2, db2 = 5.2;
	printf("%.0f %.0f\n", floor(db1),ceil(db1));
	printf("%.0f %.0f\n", floor(db2),ceil(db2));
	system("pause");
  return 0;
}

