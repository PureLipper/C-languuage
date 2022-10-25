#include<iostream>
#include<string>
using namespace std;

int main(){
	long a,n,m,x;
	cin >> a >> n >> m >> x;
	long u[n+1];//每站上车人数数组
	long d[n+1];//每站下车人数数组
	long sum[n+1];//每站车上人数总和
	u[1] = a;
	d[1] = 0;
	sum[1] = a;
	sum[2] = a;
	for(long i = 0;;i++){
		u[2] = i;
		d[2] = i;
		for(int j = 3;j < n;j++){
			u[j] = u[j-1] + u[j-2];
			d[j] = u[j-1];
			sum[j] = sum[j-1] + u[j] - d[j];
		}
		if(sum[n-1] == m){
			break;
		}
	}
	cout << sum[x];
}