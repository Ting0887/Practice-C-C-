#include<iostream>
using namespace std;
int main(){
	int A,B,R;
	cout << "�п�J�Ĥ@�ӼƦrA:";
	cin >> A;
	cout << "�п�J�ĤG�ӼƦrB:";
	cin >> B;
	do{
		R = A%B;
		A = B;
		B = R;
	}while(R!=0);
	cout << A << "���̤j���]��" << endl;
} 
