#include<iostream>
#include<string>
using namespace std;

int main(){
	int n = 0,temp = 1,max = 0;
	cin >> n;
	int a[n+1];
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	for(int i = 2;i <= n;i++){
		if(a[i] - a[i-1] == 1){
			temp++;
		}
		else	temp = 1;
		if(temp > max)	max = temp;
		
	}
	cout << max;
}