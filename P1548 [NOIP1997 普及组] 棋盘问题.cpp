#include<string>
#include<iostream>
using namespace std;

int main(){
	int n = 0,m = 0;
	cin >> n >> m;
	int num_f = 0,num_j = 0;
	for(int i = 1;i <= n;i++){//左上角坐标列遍历
		for(int j = 1;j <= m;j++){//左上角坐标行遍历
			for(int k = i;k <= n;k++){//右下角坐标列遍历
				for(int l = j;l <= m;l++){//右下角坐标行遍历
					if(k - i == l - j)	num_f++;
					else	num_j++;
				}
			}
		}
	}
	cout << num_f << " " << num_j;
}