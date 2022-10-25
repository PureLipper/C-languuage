#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){
	int p[10];
	int place = 0;
	int input;
	cin >> input;
	do{
		for(int i = 0;pow(2,i) <= input;i++){
			p[place] = i;
		}
		input = input - pow(2,p[place]);
		cout << input << endl;
		place++;
	}while(input > 0);
	for (int j = 0;j < 10;j++){
		cout << p[place] << endl;
	}
}