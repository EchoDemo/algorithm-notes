//scanf对字符型有%c和%s两种格式（printf同理），其中%c用来输入单个字符，%s用来输入一个字符串并存在字符数组里。
//%c格式能够识别空格跟换行并将其输入，而%s通过空格或换行来识别一个字符串的结束




#include "stdafx.h"
#include<cstdio>
#include<cstdlib>


int main() {
	char str[10];
	scanf("%s", str);//不需要加取地址符&；
	printf("%s", str);
	system("pause");
	return 0;
}

