#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	int num;
	int i = 0;
	cout << "请输入课程数目：";
	cin >> num;
	int grade[100] = {};
	int bowl[11] = {};
	cout << "请输入各科成绩：" << "\n";
	do {
		cin >> grade[i];
		switch (grade[i] / 10) {
		case 0:
			bowl[0]++;
			break;
		case 1:
			bowl[1]++;
			break;
		case 2:
			bowl[2]++;
			break;
		case 3:
			bowl[3]++;
			break;
		case 4:
			bowl[4]++;
			break;
		case 5:
			bowl[5]++;
			break;
		case 6:
			bowl[6]++;
			break;
		case 7:
			bowl[7]++;
			break;
		case 8:
			bowl[8]++;
			break;
		case 9:
			bowl[9]++;
			break;
		case 10:
			bowl[10]++;
			break;
		}
		i++;
	} while (i < num);//统计成绩

	cout << "统计结果：\n";
	string OutPut;
	for (int i = *max_element(bowl, bowl + 10);i > 0;i--) {
		OutPut = "   ";
		for (int j = 0; j < 11; j++) {
			if (bowl[j] >= i) {
				OutPut += "*       ";
			}
			else
			{
				OutPut += "        ";
			}
		}
		cout << OutPut << "\n";
	}
	cout << "----------------------------------------------------------------------------------------\n";
	cout << "  0-9    10-19   20-29   30-39   40-49   50-59   60-69   70-79   80-89   90-99    100\n";
	cout << "----------------------------------------------------------------------------------------";
}