#include<iostream>
#include<string>
using namespace std;

int main() {
	string date1, date2, temp;
	int y1, y2, m1, m2, d1, d2;
	int day1 = 0,day2 = 0;
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	cin >> date1 >> date2;
	if (date1 < date2) {
		temp = date1;
		date1 = date2;
		date2 = temp;
	}
	m1 = atoi(date1.substr(4, 2).c_str());
	m2 = atoi(date2.substr(4, 2).c_str());
	y1 = atoi(date1.substr(0, 4).c_str());
	y2 = atoi(date2.substr(0, 4).c_str());
	d1 = atoi(date1.substr(6, 2).c_str());
	d2 = atoi(date2.substr(6, 2).c_str());

	for (int i = 1; i <= m1; i++) {
		day1 = day1 + days[i - 1];
	}
	day1 += d1;

	for (int i = 1; i <= m2; i++) {
		day2 += days[i - 1];
	}
	day2 += d2;
	for (int i = 1; i <= y1 - y2; i++) {
		day1 += 365;
	}

	cout << day1 - day2 + 1;
	//没考虑闰月，（-_-||）时间比较紧张
}