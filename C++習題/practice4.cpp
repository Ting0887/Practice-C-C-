#include<iostream>
using namespace std;
/*int main(){
	int num1,num2,num3,sum;
	cout << "�п�J�W���� : ";
	cin >> num1;
	cout << "�п�J�Ǥl��� : ";
	cin >> num2;
	cout << "�п�J�I�ߥ�� : ";
	cin >> num3;
	sum = 250*num1 + 300*num2 + 200*num3;
	cout << "�q���`���B��" << sum << endl;
}*/
/*
int main(){
	double r,cir,area;
	cout << "�п�J�b�| : ";
	cin >> r;
	cir = 2*r*3.14;
	cout << "��P����" <<  cir << endl;
	area = r*r*3.14;
	cout << "�魱�n��" << area << endl;
}*/
/*
int main(){
	double C,F;
	cout << "�п�J���ū� : ";
	cin >> C;
	F = C*9/5 + 32;
	cout << "�ഫ���ؤ�ū׬�" << F << endl;
}*/
int main(){
	double money,interest,r1,r2,r3;
	cout << "�п�J���� : ";
	cin >> money;
	cout << "�п�J�~�Q�v : ";
	cin >> interest;
	r1 = money*(1+interest/100);
	cout << "�Ĥ@�~���Q�M��" << r1 << endl;
	r2 = money*(1+interest/100)*(1+interest/100);
	cout << "�ĤG�~���Q�M��" << r2 << endl;
	r3= money*(1+interest/100)*(1+interest/100)*(1+interest/100);
	cout << "�ĤG�~���Q�M��" << r3 << endl;
	
}
