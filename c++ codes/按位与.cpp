#include<iostream>
#include<string>
using namespace std;

//C在B有1的位置上是1
//C在A有0的位置上是0

int main() {
	int len;
	string A, B;
	cin >> A >> B;
	len = A.size();
	for (int i = 1; i <= A.size(); i++) {
		if (A.substr(i - 1, 1) == "0" && B.substr(i - 1, 1) == "1") {
			len = 0;
			break;
		}
		else if (A.substr(i - 1, 1) == "0" && B.substr(i - 1, 1) == "0")	len--;
		else if (A.substr(i - 1, 1) == "1" && B.substr(i - 1, 1) == "1")	len--;
	}
	if (len == 0) {
		cout << 0;
	}
	else {
		cout << pow(2, len);
	}
	
}