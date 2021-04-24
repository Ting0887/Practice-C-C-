#include<iostream>
using namespace std;
int main(){
	int n;
	cout << "½Ð¿é¤Jn­È?";
	cin >> n;
	int total=0;
	int sumAll = 0;
	for(int i=1;i<=n;i++){
		total += i;
		sumAll += total;
		cout << "i=" << i << ",sum=" << total << endl;
	}
	cout << "1+(1+2)+(1+2+3)+...+(1+2+3+...+n)=" << sumAll << endl;
}
