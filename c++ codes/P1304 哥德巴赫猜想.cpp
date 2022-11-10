#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

bool judge(int a){
	bool flag = true;
	for(int i = 2;i <= sqrt(a);i++){
		if(a % i == 0)	flag = false;
	}
	return flag;
}

int main(){
	int n,p;
	cin >> n;
	for(int i = 4;i <= n;i += 2){
		for(int j = 2;j <= i;j++){
			if(judge(j)){
				p = i - j;
				if(judge(p)){
					cout << i << "=" << j << "+" << p << endl;
					break;
				}
			}
		}
	}
}