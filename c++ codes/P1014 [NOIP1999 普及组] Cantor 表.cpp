#include<iostream>
#include<string>
using namespace std;

int main(){
	long long N;
	int i = 0;
	int time = 1;
	string result = "";
	int up,down = 1;
	cin >> N;
	do{
		down = time + 1;
		for(int j = 1;j <= time;j++){
			up = j;
			i++;
			down--;
			if(i >= N)	break;
		}
		time++;
	}while(i < N);
	cout << up << "/" << down;
}