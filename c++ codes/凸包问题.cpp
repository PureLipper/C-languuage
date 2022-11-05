#include<iostream>
#include<string>
using namespace std;

struct point{
	int x = 0;
	int y = 0;
};

int main(){
	string input;
	int num = 0;
	int p = 0,flag = 0;
	cin >> input;
	for(int i = 0;i < input.size();i++){
		if(input.substr(i,1) >= "0" && input.substr(i,1) <= "9")	num++;
	}
	num /= 2;
	point s[num];
	for(int i = 1;i <= num;i++){
		s[i].x = atoi(input.substr(6 * i - 5,1).c_str());
		s[i].y = atoi(input.substr(6 * i - 3,1).c_str());
	}

	int a,b,c,last = 1;
	bool f[num - 1] = {false};
	for(int i = 0;i < num;i++){
		for(int j = i + 1;j < num;j++){
			for(int n = 0;n < num;n++){
				f[n] = false;
			}
			flag = 1;
			a = s[j].y - s[i].y;
			b = s[i].x - s[j].x;
			c = s[i].x * s[j].y - s[j].x * s[i].y;
			
			for(int k = 0;k < num;k++){
				if(k == j || k == i)	continue;
				f[k] = a * s[k].x + b * s[k].y > c;
			}
			
			for(int k = 0;k < num;k++){
				if(k == j || k == i)	continue;
				if(f[k] != f[last]){
					flag = 0;
					break;
				}
				last = k;
				
			}
			if(flag == 1)	cout << i + 1 << "--" << j + 1 << endl;
		}
	}
}