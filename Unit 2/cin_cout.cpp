/*
cin和cout是c++中的输入函数和输出函数，需要添加头文件"#include<iostream>"和"using namespace std;"才能使用，他们不需要指定输入和输出的格式，
也不用使用取地址符&,
*/


#include "stdafx.h"
#include<cstdio>
#include<cstdlib>
#include<iomanip>                 //此头文件用于cout输出控制double型的精度；
#include<iostream>
using namespace std;


int main(){
	int n;
	double db;
	char c;
	char str1[10],str2[100];
	cin >> n>>db>>c>>str1;
  cout << n << " "<<db<<" "<< c << "\n" << str1<<endl;//cout输出;
  cout<<setiosflags(ios::fixed)<<setprecision(2)<<123.4567<<endl;//输出小数点后两位
  system("pause");
	return 0;
}
