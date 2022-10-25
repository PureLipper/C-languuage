#include<iostream>
#include<string>
using namespace std;

int main(){
	bool flag;
	int L,S,T,M,p = 0;
	cin >> L >> S >> T >> M;
	int temp,min,step;
	int f[L+1] = {0};
	for(int i = 1;i <= M;i++){
		cin >> temp;
		f[temp] = 1;
	}
	do{
		flag = false;
		for(int i = S;i <= T;i++){
			if(f[p+i] != 1){
				flag = true;
				step = i;
				p += step;
			}
		}
		if(flag == false){
			step = T;
			p += step;
			min++;
		}
	}while(p < L);
	cout << min;
}//!!!!!!!范围问题导致错误，小范围运行没有任何问题