#include<iostream>
#include<string>
using namespace std;

int main() {
	int n,max = 0;
	string temp = "";
	cin >> n;
	string a[20] = {""};
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j > i; j--) {
			if (a[j] > a[j - 1]) {
				temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << a[i];
	}
}