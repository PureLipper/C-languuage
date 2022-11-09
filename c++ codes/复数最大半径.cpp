#include<string>
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double r = 0.0,temp = 0.0;
    int N;
    int a,b;
    cin >> N;
    for(int i = 1;i <= N;i++){
        cin >> a >> b;
        temp = sqrt(a * a + b * b);
        if(temp > r)    r = temp;
    }
    cout << round(r * 100) / 100;
}