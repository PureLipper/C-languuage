#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x,n,sum = 0;
	cout << "������x��n��ֵ��\nx:";
	cin >> x;
	cout << "n:";
	cin >> n;
	for (int i = x; i < x + n; i++) {
		if (i % 7 < 6 && i % 7 != 0) {
			sum = sum + 4;
		}
	}
	cout << "һ�����ˣ�" << sum << "ǧ��";
}