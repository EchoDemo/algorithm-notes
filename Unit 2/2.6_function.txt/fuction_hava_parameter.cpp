#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

int judge(int x) {
	if (x > 0) return 1;
	else if (x == 0) return 0;
	else return -1;
}

int main() {
	int a, ans;
	scanf("%d", &a);
	ans = judge(a);
	printf("%d\n", ans);
	system("pause");
	return 0;
}
