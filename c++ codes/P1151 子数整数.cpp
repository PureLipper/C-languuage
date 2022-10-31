#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){
	int K,result = 0;
	int sub1=0,sub2=0,sub3=0;
	cin >> K;
	for(int i = 10000;i <= 30000;i++){
		sub1 = i/100;
		sub2 = (i/10)%1000;
		sub3 = i%1000;
		if(sub1%K == 0 && sub2%K == 0 && sub3%K == 0){
			result++;
			cout << i << endl;
		}
	}
	if(result == 0)	cout << "No";
}