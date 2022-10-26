#include<iostream>
#include<string>
using namespace std;

int main(){
	int N,average,pmax,pmin,n,max;
	n = 0;
	cin >> N;
	int A[N + 1] = {0};
	for(int i = 1;i <= N;i++){
		cin >> A[i];
		average += A[i];
	}
	average /= N;
	for(int j = 1;;j++){
		pmax = 1,pmin = 1;
		for(int i = 2;i <= N;i++){
			if (A[i] > A[pmax]){
				pmax = i;
			}
			if (A[i] < A[pmin]){
				pmin = i;
			}
		}
		if(A[pmax] == A[pmin])	break;
		if(A[pmax] != A[pmin]){
			A[pmax] -= (average - A[pmin]);
			A[pmin] = average;
			n++;
		}
	}
	cout << n;
}//题目看错了o(╥﹏╥)o，只能相邻移动