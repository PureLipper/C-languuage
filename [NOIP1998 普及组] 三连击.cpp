#include<string>
#include<iostream>
using namespace std;

int main(){
	 bool f[10] = {false,false,false,false,false,false,false,false,false,false};
	 int i2,i3;
	 int x1,y1,z1;
	 int x2,y2,z2;
	 int x3,y3,z3;
	 for (int i = 123;i <= 333;i++){
	 	
	 	for (int j = 0;j <= 9;j++){
		 	f[j] = false;
		 }
	 	
		x1 = i / 100;
	 	y1 = (i / 10) % 10;
	 	z1 = i % 10;
	 	if(x1 == y1 || x1 == z1 || y1 == z1 || x1 == 0 || y1 == 0 || z1 == 0){
	 		continue;
		}
	 	f[x1] = true;
	 	f[y1] = true;
	 	f[z1] = true;
	 	
	 	
	 	i2 = i * 2;
	 	x2 = i2 / 100;
	 	y2 = (i2 / 10) % 10;
	 	z2 = i2 % 10;
	 	if(f[x2] == true || f[y2] == true || f[z2] == true || x2 == y2 || x2 == z2 || y2 == z2 || x2 == 0 || y2 == 0 || z2 == 0){
	 		continue;
		}
		f[x2] = true;
	 	f[y2] = true;
	 	f[z2] = true;

	 		
	 	i3 = i * 3;
	 	x3 = i3 / 100;
	 	y3 = (i3 / 10) % 10;
	 	z3 = i3 % 10;
	 	if(f[x3] == true || f[y3] == true || f[z3] == true || i3 >= 987 || x3 == y3 || x3 == z3 || y3 == z3||x3 == 0||y3 == 0||z3 == 0){
	 		continue;
		}
		cout << i << " " << i2 << " " << i3 << endl;
	 }
}