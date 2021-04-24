#include <iostream>
using namespace std;
int main(){
	int num;
	cout << "Please input a number:" ;
	cin >> num;
	if(num%2==0){
		cout << num << "為偶數" << endl;
	}
	else{
		cout << num << "為奇數" << endl;
	}
} 
