#include<iostream>
using namespace std;
int main(){
	/*
	int i=1,M,fac=1;
	cout << "請輸入M?";
	cin >> M;
	while(fac<M){
		i += 1;
		fac *= i;
	} 
	cout << i << "階乘大於等於" << "M" << endl;
	*/
	int start,end,n,i=0;
	cout << "請輸入儲存金額: ";
	cin >> start;
	cout << "請輸入目標金額: ";
	cin >> end;
	cout << "請輸入存款年利率: ";
	cin >> n;
	do{
		i+=1;
		start = start*(1+(double)n/100);
		cout << "第" << i << "年後，存款金額為" << start << endl;
	}while(start<end);
} 
