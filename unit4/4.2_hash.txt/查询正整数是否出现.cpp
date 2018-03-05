//以空间换时间：
#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
using namespace std;

const int maxn = 100010;
bool hashTable[maxn] = { false };

int main() {
	int n, m, x;
	cin >> n >> m;
	for (int i = 0;i < n;i++) {
		cin >> x;
		hashTable[x] = true; //数字x出现过；
	}
	for (int i = 0;i < m;i++) {
		cin >> x;
		if (hashTable[x] == true) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
	}
	system("pause");
	return 0;
}
