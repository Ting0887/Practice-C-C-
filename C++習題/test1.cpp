#include<iostream>
#include<cmath>
using namespace std;
//1.����ΩP���P���n
/*
int main(){
	int height,weight;
	cout << "�п�J����?";
	cin >> height ;
	cout << "�п�J�e��?";
	cin >> weight ;
	int premiter = 2*(height+weight);
	cout << "�P����" <<  premiter << endl;
	int area = height*weight;
	cout << "���n��" << area << endl;
}
*/
//2.�D�����`�M�P���� 
/*
int main(){
	int f_score,s_score,t_score,total;
	double avg; 
	cout << "�п�J�Ĥ@�������Ҧ��Z?" ;
	cin >> f_score;
	cout << "�п�J�ĤG�������Ҧ��Z?" ;
	cin >> s_score;
	cout << "�п�J�����Ҧ��Z?" ;
	cin >> t_score;
	
	total = f_score + s_score + t_score;
	cout << "�`����" << total << endl;
	avg = (f_score + s_score + t_score)/3.0;
	cout << "������" << avg << endl;
} */
//3.�^���ऽ��
/*
int main(){
	int foot,inches;
	cout << "�п�J�X��?";
	cin >> foot;
	cout << "�п�J�X�T?";
	cin >> inches;
	double cm = (foot*12 + inches)*2.54;
	cout << "�ഫ�������A������" << cm << endl;
}
*/
//4.�ū׳���ഫ
/* 
int main(){
	int F;
	double C;
	cout << "�п�J�ؤ�ū�?";
	cin >> F;
	C = (F-32)*5/9.0;
	cout << "�ഫ�����ū׬�" << C << endl; 
}
*/
//5.�p�{������
/*
int main(){
	double X;
	cout << "�п�J���{��?";
	cin >> X;
	if(X<1.5){
	cout << "�һݨ��ꬰ"<< 70;
	}
	else if(X<1.75){
		cout << "�һݨ��ꬰ" << 75;	
	}
	else if(X<2){
		cout << "�һݨ��ꬰ" << 80;	
	}
	else if(X<2.25){
		cout << "�һݨ��ꬰ" << 85;	
	}
	else{
		cout << "�һݨ��ꬰ" << 90;	
	}
}*/ 
//6.���ճ��i
/* 
int main(){
	int num;
	cout << "�п�J�y��?";
	cin >> num;
	float group = num/5.0;
	cout << "���ղէO��" << ceil(group)<< endl;
}
*/
//7.�R����
int main(){
	int num;
	cout << "�п�J�ʶR���ƪ�����?";
	cin >> num;
	int dozen = num/12;
	int drink = num%12;
	int price = dozen*200 + drink*20;
	cout << "�ݪ�O" << price << endl; 
} 
