#include<cmath>
#include<string>
#include<iostream>
using namespace std;

int main() {
	int key;
	int L, R, m;
	L = 0, R = 19;
	int num[20] = {12,15,18,19,23,24,26,29,31,33,34,36,39,42,44,47,48,56,59,60};
	for (int i = 0; i < 20; i++) {
		cout << num[i] << ",";
	}
	cout << "\n" << "请输入要查找的数值：";
	cin >> key;
	int ans;
	while (L <= R)  {
		ans = (L + R) / 2;
		m = num[ans];
		if (key > m) 
			L = ans + 1;
		else if (key < m) 
			R = ans - 1;
		else {
			cout << "数据位置为：" << ans + 1; 
			break;
		}
	}
}