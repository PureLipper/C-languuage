#include<iostream>
#include<string>
using namespace std;

int main() {
	int k,i = 1;
	double sum = 0;
	cin >> k;
	do {
		sum = sum + 1.0 / i;
		i++;
	} while (sum <= k);
	cout << i - 1;
}