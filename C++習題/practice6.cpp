#include<iostream>
#include<math.h>
using namespace  std;
int main(){
	double weight,height,BMI;
    int ibmi;
	cout << "�п�J�魫(KG)?";
	cin >> weight;
	cout << "�п�J����(M)?";
	cin >> height;
	BMI = weight/(height*height);
	cout << "BMI��" << BMI << endl;
	ibmi=floor(BMI);
	
	switch(ibmi){
		case 1 ... 17:
			cout << "�魫�L��" << endl;
			break;
		case 18 ... 23:
			cout << "�魫���`" << endl;
			break;
		case 24 ... 26:
			cout << "�魫�L��" << endl;
			break;
		default:
			cout << "�魫�έD" << endl;
			break; 
	}
}
