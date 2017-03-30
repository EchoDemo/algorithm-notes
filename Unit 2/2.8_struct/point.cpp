/*
用于存放平面点的坐标（x,y）
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>

struct Point {
	int x, y;
	Point() {}
	Point(int x0, int y0) : x(x0), y(y0) {}
}pt[10];

int main(){
	int num = 0;
	for (int i = 1;i <= 3;i++){
		for (int j= 1;j <= 3;j++) {
			pt[num++] = Point(i, j);
		}
	}

	for (int i = 0;i < num;i++) {
		printf("%d,%d\n", pt[i].x, pt[i].y);
	}
	system("pause");
	return 0;
}
