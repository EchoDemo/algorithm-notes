//如果表达式是(!=0)或(==0)则可以采用简单的写法,



#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main()
{
	int n = 0,m=5;
	if (n) {
		printf("n is not zero!\n");
	}
	else{
		printf("n is zero!\n");
	}
	if(m){
		printf("m is not zero!\n");
	}
	else {
		printf("m is zero!\n");
	}
	system("pause");
	return 0;
}

/*这是判断非零时
#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int main()
{
	int n = 0,m=5;
	if (!n) {
		printf("n is zero!\n");
	}
	else{
		printf("n is not zero!\n");
	}
	if(!m){
		printf("m is zero!\n");
	}
	else {
		printf("m is not zero!\n");
	}
	system("pause");
	return 0;
}
*/
