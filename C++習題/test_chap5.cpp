#include<iostream>
using namespace std;
/*�����p�� 
int main(){
	int N;
	cout << "�п�J�@�ӼƦr?";
	cin >> N;
	int num = 1;
	for(int i=1;i<=N;i++){
		num *= i;
	}
	cout <<  N << "��������" << num;
}*/
/*����M 
int main(){
	int N;
	cout << "�п�Jn��?";
	cin >> N;
	int num = 0;
	for(int i=0;i<=N;i++){
		num += i*i;
	}
	cout << "1*1+2*2+...+n*n" << "����" << num;
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
	cout << "n=" << n << ",1*1+2*2+...+n*n=" << num << "�j��1000" << endl; 
} 
