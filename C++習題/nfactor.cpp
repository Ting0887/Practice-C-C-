#include<iostream>
using namespace std;
int f(int);

int main(){
    int n,result;
    cout << "�п�JN��?";
    cin >> n;
    result = f(n);
    cout << n << "��������" << result;
}

int f(int n){
    int re;
    if(n == 1){
        re = 1;
    }
    else{
        re = n*f(n-1);
    }
    return re;
}
