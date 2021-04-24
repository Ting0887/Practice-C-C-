#include<iostream>
#include<cmath>
using namespace std;
//1.長方形周長與面積
/*
int main(){
	int height,weight;
	cout << "請輸入長度?";
	cin >> height ;
	cout << "請輸入寬度?";
	cin >> weight ;
	int premiter = 2*(height+weight);
	cout << "周長為" <<  premiter << endl;
	int area = height*weight;
	cout << "面積為" << area << endl;
}
*/
//2.求３數總和與平均 
/*
int main(){
	int f_score,s_score,t_score,total;
	double avg; 
	cout << "請輸入第一次期中考成績?" ;
	cin >> f_score;
	cout << "請輸入第二次期中考成績?" ;
	cin >> s_score;
	cout << "請輸入期末考成績?" ;
	cin >> t_score;
	
	total = f_score + s_score + t_score;
	cout << "總分為" << total << endl;
	avg = (f_score + s_score + t_score)/3.0;
	cout << "平均為" << avg << endl;
} */
//3.英制轉公制
/*
int main(){
	int foot,inches;
	cout << "請輸入幾尺?";
	cin >> foot;
	cout << "請輸入幾吋?";
	cin >> inches;
	double cm = (foot*12 + inches)*2.54;
	cout << "轉換為公分，身高為" << cm << endl;
}
*/
//4.溫度單位轉換
/* 
int main(){
	int F;
	double C;
	cout << "請輸入華氏溫度?";
	cin >> F;
	C = (F-32)*5/9.0;
	cout << "轉換成攝氏溫度為" << C << endl; 
}
*/
//5.計程車車資
/*
int main(){
	double X;
	cout << "請輸入里程數?";
	cin >> X;
	if(X<1.5){
	cout << "所需車資為"<< 70;
	}
	else if(X<1.75){
		cout << "所需車資為" << 75;	
	}
	else if(X<2){
		cout << "所需車資為" << 80;	
	}
	else if(X<2.25){
		cout << "所需車資為" << 85;	
	}
	else{
		cout << "所需車資為" << 90;	
	}
}*/ 
//6.分組報告
/* 
int main(){
	int num;
	cout << "請輸入座號?";
	cin >> num;
	float group = num/5.0;
	cout << "分組組別為" << ceil(group)<< endl;
}
*/
//7.買飲料
int main(){
	int num;
	cout << "請輸入購買飲料的罐數?";
	cin >> num;
	int dozen = num/12;
	int drink = num%12;
	int price = dozen*200 + drink*20;
	cout << "需花費" << price << endl; 
} 
