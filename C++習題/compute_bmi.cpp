#include<iostream>
using namespace std;
double ComputeBMI(double,double);

int main(){
    double height,kg,bmi;
    cout << "請輸入體重(KG)?";
    cin >> kg;
    cout << "請輸入身高(M)?";
    cin >> height;

    bmi = ComputeBMI(kg,height);
    cout << "BMI=" << bmi << endl;
    if (bmi < 18){
        cout << "體重過輕" <<endl;
    }
    else if (bmi<24){
        cout << "體重正常" << endl;
    }
    else if (bmi<27){
        cout << "體重過重"  << endl;
    }
    else{
        cout << "體重肥胖" << endl;
    }
}

double ComputeBMI(double kg,double height){
    double result;
    result = kg/(height*height);
    return result;
}
