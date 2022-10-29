#include<iostream>
#include<string>
using namespace std;

int main(){
	int n,a,b;
	int flag = 0;
	cin >> n;
	int x[n],y[n],dx[n],dy[n];
	for(int i = 1;i <= n;i++){
		cin >> x[i] >> y[i] >> dx[i] >> dy[i];
	}
	cin >> a >> b;
	for(int i = n;i >= 1;i--){
		if(a >= x[i] && b >= y[i] && a <= x[i] + dx[i] && b <= y[i] + dy[i]){
			cout << i;
			flag = 1;
			break;
		}
	}
	if(flag = 0)	cout << "-1";
}