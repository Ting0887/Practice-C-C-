#include<iostream>
using namespace std;
/*階乘計算 
int main(){
	int N;
	cout << "請輸入一個數字?";
	cin >> N;
	int num = 1;
	for(int i=1;i<=N;i++){
		num *= i;
	}
	cout <<  N << "階乘等於" << num;
}*/
/*平方和 
int main(){
	int N;
	cout << "請輸入n值?";
	cin >> N;
	int num = 0;
	for(int i=0;i<=N;i++){
		num += i*i;
	}
	cout << "1*1+2*2+...+n*n" << "等於" << num;
} */
/* 
int main(){
	for(int i=1;i<=1000;i++){
		if(i%3!=0){
			cout << i << endl;
		}
	}
} */
int main(){
	int n=0;
	int num = 0;
	while(num<1000){
		n+=1;
		num += n*n;
	}
	cout << "n=" << n << ",1*1+2*2+...+n*n=" << num << "大於1000" << endl; 
} 
