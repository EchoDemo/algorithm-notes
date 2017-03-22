#include "stdafx.h"
#include<cstdio>
#include<cstdlib>
#include<cstring>


int main() {
	int n=12;
	double db=3.1415;
	char str[100] , str2[100]="good";
	sprintf(str, "%d:%lf,%s", n, db, str2);
	printf("str=%s\n",str);
	system("pause");
	return 0;
}
