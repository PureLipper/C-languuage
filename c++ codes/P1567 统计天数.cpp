#include<iostream>
#include<string>
using namespace std;

int main(){
	long long tem = 0,last_tem = 0;
	long N = 0,t = 0,result = 0;
	cin >> N;
	for(int i = 1;i <= N;i++){
		cin >> tem;
		if(tem > last_tem){
			t++;
		}
		else{
			t = 1;
		}
		last_tem = tem;
		if(t > result)	result = t;
	}
	cout << result;
}