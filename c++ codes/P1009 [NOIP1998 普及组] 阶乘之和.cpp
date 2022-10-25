#include<iostream>
#include<string>
using namespace std;

int main(){
	int input = 0;
	cin >> input;
	long long result = 0;
	long long t = 1;
	for(int i = 1;i <= input;i++){
		t *= i;
		result = result + t;
	}
	cout << result;
	
}