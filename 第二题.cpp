#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x,n,sum = 0;
	cout << "请输入x和n的值：\nx:";
	cin >> x;
	cout << "n:";
	cin >> n;
	for (int i = x; i < x + n; i++) {
		if (i % 7 < 6 && i % 7 != 0) {
			sum = sum + 4;
		}
	}
	cout << "一共跑了：" << sum << "千米";
}