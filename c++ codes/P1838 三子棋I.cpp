#include<iostream>
#include<string>
using namespace std;

int main(){
	int t = 1;
	string s;
	cin >> s;
	int a[10] = {0};
	for(int i = 1;i <= s.size();i++){
		a[s.substr(i-1,1)] = t;
		t = -t;
	}
	if()
}