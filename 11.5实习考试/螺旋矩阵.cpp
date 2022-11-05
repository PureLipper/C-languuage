#include<iostream>
#include<string>
using namespace std;

int main() {
	int m, n, x = 1, y = 1, flag = 1;
	cin >> m >> n;
	int a[m + 2][n + 2] = {0};
	int b[m + 2][n + 2] = {0};
	for(int i = 0;i < m + 2;i++){
		b[i][0] = 1;
		b[i][n+1] = 1;
	}
	for(int i = 0;i < m + 2;i++){
		b[0][i] = 1;
		b[m+1][i] = 1;
	}
	for(int i = 1;i <= m;i++){
		for(int j = 1;j <= n;j++){
			cin >> a[i][j];
		}
	}
	do{	
		while(b[x][y] == 0){
			cout << a[x][y] << " ";
			b[x][y] = 1;
			y++;
		}
		y--;
		x++;
		while(b[x][y] == 0){
			cout << a[x][y] << " ";
			b[x][y] = 1;
			x++;
		}
		x--;
		y--;
		while(b[x][y] == 0){
			cout << a[x][y] << " ";
			b[x][y] = 1;
			y--;
		}
		y++;
		x--;
		while(b[x][y] == 0){
			cout << a[x][y] << " ";
			b[x][y] = 1;
			x--;
		}
		x++;
		y++;
		if(b[x+1][y] == 1 && b[x-1][y] == 1 && b[x][y-1] == 1 && b[x][y+1] == 1)	break;
    }while(true);
    cout << a[x][y];
}