#include <iostream>
#include <cmath>
#include<string>
using namespace std;
string intToA(int n, int radix) 
{
	string ans = "";
	do {
		int t = n % radix;
		if (t >= 0 && t <= 9)    ans += t + '0';
		else ans += t - 10 + 'a';
		n /= radix;
	} while (n != 0);
	reverse(ans.begin(), ans.end());
	return ans;
}

bool judge(string c) {
	bool flag = true;
	for (int i = 1; i < (c.size() / 2) + 1; i++) {
		if (c[i] != c[c.size() - i + 1]) {
			flag = false;
		}
	}
	return flag;
}

int main() {
	string ans;
		bool flag = true;
		int n;
		cout << "请输入一个数：";
		cin >> n;
		for (int i = 2; i < n - 1; i++) {
			if (judge(intToA(n, i)) == false) {
				flag = false;
				break;
			}
		}
		if (flag)	ans = "true";
		else   ans = "false";
		cout <<  n << "是否是超级回文数？" << ans << endl;
		
	return 0;
};


