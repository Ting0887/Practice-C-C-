#include<iostream>
int F(int);
using namespace std;
int main(){
    int k,result;
    cout << "�п�JK��?";
    cin >> k;
    result = F(k);
    cout << "�O���ƦC��" << k << "�Ӥ����Ȭ�" << result;
}

int F(int n){
    int result;
    if(n==0 or n==1){
        result = 1;
    }
    else{
        result = F(n-1) + F(n-2);
    }
    cout << "�O���ƦC��" << n << "�Ӥ����Ȭ�" << result << endl;
    return result;
}
