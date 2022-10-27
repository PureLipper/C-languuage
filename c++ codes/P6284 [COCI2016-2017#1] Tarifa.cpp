#include<iostream>
#include<string>
using namespace std;

int main(){
	int x,n;
	cin >> x >> n;
	int s[n+1];
	int sum = x * n;
	for(int i = 1;i <= n;i++){
		cin >> s[i];
		sum -= s[i];
	}
	cout << sum + x;
}