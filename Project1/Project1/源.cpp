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
		cout << "������������߳���";
		cin >> a;
		cout << "�������ϰ��������";
		cin >> block_num;
		if (block_num > a * a)	cout << "��������������!\n";

	} while (block_num > a * a);
	//���볡�ش�С���ϰ������

	for (int i = 1; i <= block_num; i++) {
		cout << "�������" << i << "���ϰ��������x���У���y���У���\n" << "x:";
		cin >> x;
		if (x > a) {
			cout << "�������������룡";
			i--;
			continue;
		}
		cout << "y:";
		cin >> y;
		if (y > a) {
			cout << "�������������룡";
			i--;
			continue;
		}
		block[x][y] = 1;
	}
	//�洢�ϰ�������

	cout << "�������鳤���λ��x��y��\n" << "x:";
	cin >> x;
	cout << "y:";
	cin >> y;

	cout << "�������ƶ�����UDLR�������ң���";
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
		cout << x << " " << y << "\n";
	}
	//����λ�ñ任

	//cout << "�鳤����λ�ã�" << x << y;
}