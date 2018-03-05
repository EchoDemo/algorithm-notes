#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
using namespace std;

const int maxn = 100010;
int hashTable[maxn] = {0};

int main() {
	int n, m, x;
	cin >> n >> m;
	for (int i = 0;i < n;i++) {
		cin >> x;
		hashTable[x]++;
	}
	for (int i = 0;i < m;i++) {
		cin >> x;
		cout << hashTable[x] << endl;
	}
	system("pause");
	return 0;
}