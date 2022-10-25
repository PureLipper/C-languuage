#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
using namespace std;
int main() {
	int round = 0;
	float m1 = 100, m2 = 100;
	float a1, a2,t1, t2;
	int ans1, ans2, ans;
	cout << "一号玩家初始筹码：" << m1 << endl;
	cout << "二号玩家初始筹码：" << m2 << endl;

	do {
		round++;
		cout << "第" << round << "回合\n";
		do {
			cout << "请一号玩家下注：";
			cin >> a1;
			if (m1 - a1 < 0)	cout << "筹码不足，请重新输入！";
		} while (m1 - a1 < 0);
		m1 -= a1;

		do {
			cout << "请二号玩家输入筹码数：";
			cin >> a2;
			if (m2 - a2 < 0)	cout << "筹码不足，请重新输入！";
		} while (m2 - a2 < 0);
		m2 -= a2;

		t1 = rand() % 100 + 1;
		t2 = rand() % 100 + 1;

		do {
			cout << "请一号玩家猜测数字大小（1为a>b，0为a<b）：";
			cin >> ans1;
			if (ans1 != 0 && ans1 != 1)	cout << "错误输入，请重新输入！" << "\n";
		} while (ans1 != 0 && ans1 != 1);

		do {
			cout << "请二号玩家猜测数字大小（1为a>b，0为a<b）：";
			cin >> ans2;
			if (ans2 != 0 && ans2 != 1)	cout << "错误输入，请重新输入！" << "\n";
		} while (ans2 != 0 && ans2 != 1);

		if (t1 > t2)	ans = 1;
		else ans = 0;

		if (ans1 == ans && ans2 == ans || ans1 != ans && ans2 != ans) {
			cout << "平局，金钱平分。";
			m1 += (a1 + a2) / 2;
			m2 += (a1 + a2) / 2;
		}
		if (ans1 == ans && ans2 != ans) {
			cout << "一号玩家猜对，二号筹码流入一号玩家。";
			m1 += a2 + a1;
		}
		if (ans1 != ans && ans2 == ans) {
			cout << "二号玩家猜对，一号筹码流入二号玩家。";
			m2 += a2 + a1;
		}
		cout << endl << "一号玩家剩余筹码：" << m1 << endl;
		cout << "二号玩家剩余筹码：" << m2 << endl;
		cout << "本轮数字：a = " << t1 << "  " << "b = " << t2 << endl;
		if (m1 <= 0)	cout << "二号玩家胜利！";
		else if (m2 <= 0 ) cout << "一号玩家胜利！";
	} while (m1 > 0 && m2 > 0);
}