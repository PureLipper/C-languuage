#include<iostream>
#include<string>
using namespace std;

int main(){
	int num = 0,max = 0,p = 1,temp = 0;
	cin >> num;
	string person[num+1];
	string help[num+1];
	for(int i = 1;i <= num;i++){
		temp = 0;
		cin >> person[i] >> help[i];
		for(int j = 0;j <= help[i].size() - 3;j++){
			if(help[i].substr(j,3) == "sos")	temp++;
		}
		if(temp > max){
			max = temp;
			p = i;
		}
		else if(temp == max){
			person[p] = person[p] + " " + person[i];
		}
	}
	cout << person[p] << endl << max;
}