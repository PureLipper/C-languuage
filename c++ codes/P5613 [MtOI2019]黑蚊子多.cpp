#include<iostream>
#include<string>
using namespace std;

int main(){
	int n,m,k,p = 0,time = 0;
	cin >> n >> m >> k;
	int sp[k+1] = {0};
	for(int i = 1;i <= k;i++){
		cin >> sp[i];
	}
	do{
		p += m;
		time++;
		for(int i = 1;i <= k;i++){
			if(sp[i] == p)	m++;
		}
	}while(p < n);
	cout << time;
}