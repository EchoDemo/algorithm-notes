锤子剪刀布 (20)

题目描述
大家应该都会玩“锤子剪刀布”的游戏：两人同时给出手势，胜负规则如图所示：
![图片](https://github.com/EchoDemo/algorithm-notes/blob/master/Unit3/3.1_experiment.txt/image/play.png)




现给出两人的交锋记录，请统计双方的胜、平、负次数，并且给出双方分别出什么手势的胜算最大。

输入

输入第1行给出正整数N（<=105），即双方交锋的次数。随后N行，每行给出一次交锋的信息，即甲、乙双方同时给出的的手势。C代表“锤子”、J代表“剪刀”、B代表“布”，第1个字母代表甲方，第2个代表乙方，中间有1个空格。

输出

输出第1、2行分别给出甲、乙的胜、平、负次数，数字间以1个空格分隔。第3行给出两个字母，分别代表甲、乙获胜次数最多的手势，中间有1个空格。如果解不唯一，则输出按字母序最小的解。

样例输入

10

C J

J B

C B

B B

B C

C C

C B

J B

B C

J J

样例输出

5 3 2

2 3 5

B B



#include "stdafx.h"

#include"iostream"
	
#include<stdlib.h>

using namespace std;


int main() {

	int n,m,xc=0,xb=0,xj=0,yc=0,yb=0,yj=0,xwin=0,xlose=0;
	
	cin >> n;
	
	m = n;
	
	while (n--) {
	
		char x, y;
		
		cin >> x >> y;
		
		if (x == 'C') {
		
			if (y == 'J') {
			
				xc++;
				
				xwin++;
				
			}else if (y == 'B') {
			
				xlose++;
				
				yb++;
				
			}else {}
			
		}
		
		else if (x == 'J') {
		
			if (y == 'C') {
			
				xlose++;
				
				yc++;
				
			}
			
			else if (y == 'B') {
			
				xwin++;
				
				xj++;
				
			}else{}
			
		
		}
		
		else {
		
			if (y == 'C') {
			
				xwin++;
				
				xb++;
				
			}else if (y == 'J') {
			
				xlose++;
				
				yj++;
				
			}else{}
			
		
		}
		
	}
	
	cout << xwin << " " << (m - xwin - xlose) << " " << xlose << endl;
	
	cout << xlose << " " << (m - xwin - xlose) << " " << xwin << endl;
	
	cout << ((xb >= xc) ? ((xb >= xj) ? 'B' : 'J') : ((xc >= xj) ? 'C' : 'J')) << " ";
	
	cout << ((yb >= yc) ? ((yb >= yj) ? 'B' : 'J') : ((yc >= yj) ? 'C' : 'J')) << endl;
	
	system("pause");
	
	return 0;
	
}

