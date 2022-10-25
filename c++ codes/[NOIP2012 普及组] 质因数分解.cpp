#include<cmath>
#include<iostream>
using namespace std;

int main(){
	int n,a,b,result;
	cin >> n;
	for(int i = 2;i <= sqrt(n);i++){
		if(n % i == 0)	{
		a = i;
		b = n / i;
		break;	
		}
		
	}
	if(a < b)	result = b;
	else result = a;
	cout << result;
}