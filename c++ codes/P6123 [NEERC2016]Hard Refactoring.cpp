#include<iostream>
#include<string>
#include<istream>
using namespace std;

int main() {
	string input[100];
	int i = 0;
	string temp = "";
	/*do {
		i++;
		cin >> input[i];
	} while (input[i].substr(input[i].size() - 2, 2) == "||");
	for (int j = 1; j <= i; j++) {
		cout << input[j];
	}*/
	//int L[2 * i], R[2 * i];
	for (int s = 1;; s++) {
		cin.get(input[s]);
		temp = input[s].substr(input[s].size() - 2, 2);
		//cout << temp;
		if (temp == "||") {
			continue;
		}
		else {
			break;
		}
	}


}