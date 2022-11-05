#include<iostream>
#include<string>
using namespace std;

bool isPowerOfThree(int n) {
    if (n == 1) return true;
    if (n <= 0 || n % 3 != 0) return false;
    if (n / 3 == 1) return true;
    return isPowerOfThree(n / 3);
}

int main(){
	int n;
	cin >> n;
	cout << isPowerOfThree(n);
}
