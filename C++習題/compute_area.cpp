#include<iostream>
using namespace std;
double ComputeArea(double,double);

int main(){
    double a,b,result;
    cout << "�п�J����?";
    cin >> a;
    cout << "�п�J�e��?";
    cin >> b;
    result = ComputeArea(a,b);
    cout << "���n��" << result << endl;

}

double ComputeArea(double length,double width){
    double area;
    area = length*width;
    return area;
}
