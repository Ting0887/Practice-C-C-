#include<iostream>
using namespace std;
int main(){
	int A,B,R;
	cout << "請輸入第一個數字A:";
	cin >> A;
	cout << "請輸入第二個數字B:";
	cin >> B;
	do{
		R = A%B;
		A = B;
		B = R;
	}while(R!=0);
	cout << A << "為最大公因數" << endl;
} 
