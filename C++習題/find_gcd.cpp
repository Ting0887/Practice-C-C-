#include<iostream>
using namespace std;
int Gcd(int m,int n);

/*
method 1

int main(){
    int m,n,result;
    cout << "請輸入M值?";
    cin >> m;
    cout << "請輸入N值?";
    cin >> n;
    result = Gcd(m,n);
    cout << result << endl;
}

int Gcd(int m,int n){
    int r;
    while(m%n!=0){
        r = m%n;
        m = n;
        n = r;
    }
    return n;
}*/

/*method2*/

int main(){
    int m,n,result;
    cout << "請輸入M值?";
    cin >> m;
    cout << "請輸入N值?";
    cin >> n;
    result = Gcd(m,n);
    cout << result << endl;
}
int Gcd(int m,int n){
    int r;
    if(m==0){
        return n;
    }
    else{
        r = Gcd(n%m,m);
        cout << r << endl;
    }
    return r;
}
