#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
using namespace std;

const int maxn = 11;
int n, p[maxn], hashTable[maxn] = { false };//p为当前排列，hashTable记录整数x是否已经在p中。

void generatep(int index) {
	if (index == n + 1) {//递归边界，已经处理完排列的1~n位。
		for (int i = 1;i <= n;i++) {
			cout << p[i];
		}
		cout << endl;
		return;
	}
	for (int x = 1;x <= n;x++) {
		if (hashTable[x] == false) {//如果x不在p[0]~p[index-1]中。
			p[index] = x;//令p的第index位为x，即把x加入当前排列。
			hashTable[x] = true;//记x已在p中。
			generatep(index + 1);//处理排列的第index+1号位。
			hashTable[x] = false;//处理完p[index]为x的子问题，还原状态。
		}
	}
}

int main() {//输出1~3的全排列。
	n = 3;
	generatep(1);
	system("pause");
	return 0;
}