//if的嵌套



#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main()
{
	int n = 3,m=5;
	if (n<5) {
		if (m < 5) {
			printf("%d\n", m + n);
		}else{
			printf("%d\n", m - n);
		}
	}
	else{
		printf("Hope is a dangerous thing,Hope will make a man insane!\n");
	}
	system("pause");
	return 0;
}

