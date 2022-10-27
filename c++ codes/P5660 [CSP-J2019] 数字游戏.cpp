#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	int num = 0;
	cin >> s;
	for(int i = 0;i < s.size();i++){
		if(s.substr(i,1) == "1")	num++;
	}
	cout << num;
}