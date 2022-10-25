#include<iostream>
#include<string>
using namespace std;

int main(){
	double sum = 0.0;
	int k;
	int p = 0;
	cin >> k;
	do{
		p++;
		sum = sum + 1.0 / p;
		//cout << sum << endl;
	}while(sum <= k*1.0);
	cout << p + 1;
}