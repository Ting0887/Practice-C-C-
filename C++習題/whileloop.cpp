#include<iostream>
using namespace std;
int main(){
	/*
	int i=1,M,fac=1;
	cout << "�п�JM?";
	cin >> M;
	while(fac<M){
		i += 1;
		fac *= i;
	} 
	cout << i << "�����j�󵥩�" << "M" << endl;
	*/
	int start,end,n,i=0;
	cout << "�п�J�x�s���B: ";
	cin >> start;
	cout << "�п�J�ؼЪ��B: ";
	cin >> end;
	cout << "�п�J�s�ڦ~�Q�v: ";
	cin >> n;
	do{
		i+=1;
		start = start*(1+(double)n/100);
		cout << "��" << i << "�~��A�s�ڪ��B��" << start << endl;
	}while(start<end);
} 
