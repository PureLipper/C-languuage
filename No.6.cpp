#include<cmath>
#include<iostream>
#include<string>
using namespace std;
int main() {
	int a, block_num;
	int x, y;
	int block[100][100] = {};
	string direction;
	do {
		cout << "Please input the size of the square：";
		cin >> a;
		cout << "请输入障碍物个数：";
		cin >> block_num;
		if (block_num > a * a)	cout << "错误，请重新输入!\n";

	} while (block_num > a * a);
	//输入场地大小和障碍物个数

	for (int i = 1; i <= block_num; i++) {
		cout << "请输入第" << i << "个障碍物的坐标x（行）和y（列）：\n" << "x:";
		cin >> x;
		if (x > a) {
			cout << "错误，请重新输入！";
			i--;
			continue;
		}
		cout << "y:";
		cin >> y;
		if (y > a) {
			cout << "错误，请重新输入！";
			i--;
			continue;
		}
		block[x][y] = 1;
	}
	//存储障碍物坐标

	cout << "请输入组长最初位置x和y：\n" << "x:";
	cin >> x;
	cout << "y:";
	cin >> y;

	cout << "请输入移动方向（UDLR上下左右）：";
	cin >> direction;

	for (int i = 1; i < direction.size() + 1; i++) {
		if (direction[i - 1] == 'U') {
			while (block[x][y] != 1 && x < a + 1 && y < a + 1 && x > 0 && y > 0)	x--;
			x++;
		}
		if (direction[i - 1] == 'D') {
			while (block[x][y] != 1 && x < a + 1 && y < a + 1 && x > 0 && y > 0)	x++;
			x--;
		}
		if (direction[i - 1] == 'L') {
			while (block[x][y] != 1 && x < a + 1 && y < a + 1 && x > 0 && y > 0)	y--;
			y++;
		}
		if (direction[i - 1] == 'R') {
			while (block[x][y] != 1 && x < a + 1 && y < a + 1 && x > 0 && y > 0)	y++;
			y--;
		}
		cout << x << " " <<  y << "\n";
	}
	//进行位置变换

	//cout << "组长最后的位置：" << x << y;
}