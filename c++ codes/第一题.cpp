#include <iostream>;
#include <cmath>;
using namespace std;

int main() {
	int sum = 0;
	for (int i = 1; i < 101; i++) {
		if (i % 6 == 1) {
			sum = sum + i;
		}
	}
	cout << sum;
}