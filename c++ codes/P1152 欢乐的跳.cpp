#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
	string s = "";
	int n,temp;
	cin >> n;
	bool f[n] = {false};
	long long a[n+1] = {0};
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i = 1;i < n;i++){
		temp = abs(a[i] - a[i+1]);
		if(temp > 1000){
			cout << "Not jolly";
			return 0;
		}
		f[temp] = true;
	}
	for(int i = 1;i < n;i++){
		if(f[i] == false){
			s = "Not jolly";
		}
		else{
			s = "Jolly";
		}
	}
	cout << s;
}