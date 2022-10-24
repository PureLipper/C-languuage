#include<iostream>
#include<string>
using namespace std;

int main(){
	string N,temp;
	long long result = 0;
	cin >> N;
	int a[10];
	if(N.substr(0,1) == "-"){
		for(int i = 1;i <= N.size();i++){
			temp = N.substr(i,1);
			a[i] = atoi(temp.c_str());
		}
		for(int i = N.size();i > 0;i--){
			result = result * 10 + a[i];
		}
		cout << "-" << result;
	}
	else{
		for(int i = 0;i < N.size();i++){
			temp = N.substr(i,1);
			a[i] = atoi(temp.c_str());
		}
		for(int i = N.size() - 1;i >= 0;i--){
			result = result * 10 + a[i];
		}
		cout << result;	
	}
}