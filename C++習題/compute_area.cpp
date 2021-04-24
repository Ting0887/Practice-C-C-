#include<iostream>
using namespace std;
double ComputeArea(double,double);

int main(){
    double a,b,result;
    cout << "請輸入長度?";
    cin >> a;
    cout << "請輸入寬度?";
    cin >> b;
    result = ComputeArea(a,b);
    cout << "面積為" << result << endl;

}

double ComputeArea(double length,double width){
    double area;
    area = length*width;
    return area;
}
