#include<iostream>
#include<string>
using namespace std;

int main(){
	int L = 0,R = 0;
	int n = 0;
	cin >> L >> R;
	for(int i = L;i <= R;i++){
		if(i % 10 == 2)	n++;//个位
		if((i % 100) / 10 == 2)	n++;//十位
		if((i % 1000) / 100 == 2) n++;//百位
		if((i % 10000) / 1000 == 2) n++;//千位
		if((i % 100000) / 10000 == 2) n++;//万位
	}
	cout << n;
}