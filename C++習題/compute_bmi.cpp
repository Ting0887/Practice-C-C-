#include<iostream>
using namespace std;
double ComputeBMI(double,double);

int main(){
    double height,kg,bmi;
    cout << "�п�J�魫(KG)?";
    cin >> kg;
    cout << "�п�J����(M)?";
    cin >> height;

    bmi = ComputeBMI(kg,height);
    cout << "BMI=" << bmi << endl;
    if (bmi < 18){
        cout << "�魫�L��" <<endl;
    }
    else if (bmi<24){
        cout << "�魫���`" << endl;
    }
    else if (bmi<27){
        cout << "�魫�L��"  << endl;
    }
    else{
        cout << "�魫�έD" << endl;
    }
}

double ComputeBMI(double kg,double height){
    double result;
    result = kg/(height*height);
    return result;
}
