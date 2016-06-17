#include<iostream>
using namespace std;
int digitsSquareSum(int n){
	int tt=0;
	while (n){
	    int t = n % 10;
	    tt += t*t;
	    n /= 10;
	}
	return tt;
}
int main(){
	cout<< digitsSquareSum(2) << endl;
	return 0;
}
