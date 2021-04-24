#include<iostream>
using namespace std;
/*int main(){
	int num1,num2,num3,sum;
	cout << "請輸入上衣件數 : ";
	cin >> num1;
	cout << "請輸入褲子件數 : ";
	cin >> num2;
	cout << "請輸入背心件數 : ";
	cin >> num3;
	sum = 250*num1 + 300*num2 + 200*num3;
	cout << "訂購總金額為" << sum << endl;
}*/
/*
int main(){
	double r,cir,area;
	cout << "請輸入半徑 : ";
	cin >> r;
	cir = 2*r*3.14;
	cout << "圓周長為" <<  cir << endl;
	area = r*r*3.14;
	cout << "園面積為" << area << endl;
}*/
/*
int main(){
	double C,F;
	cout << "請輸入攝氏溫度 : ";
	cin >> C;
	F = C*9/5 + 32;
	cout << "轉換成華氏溫度為" << F << endl;
}*/
int main(){
	double money,interest,r1,r2,r3;
	cout << "請輸入本金 : ";
	cin >> money;
	cout << "請輸入年利率 : ";
	cin >> interest;
	r1 = money*(1+interest/100);
	cout << "第一年本利和為" << r1 << endl;
	r2 = money*(1+interest/100)*(1+interest/100);
	cout << "第二年本利和為" << r2 << endl;
	r3= money*(1+interest/100)*(1+interest/100)*(1+interest/100);
	cout << "第二年本利和為" << r3 << endl;
	
}
