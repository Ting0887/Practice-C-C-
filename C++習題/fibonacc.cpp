#include<iostream>
int F(int);
using namespace std;
int main(){
    int k,result;
    cout << "請輸入K值?";
    cin >> k;
    result = F(k);
    cout << "費式數列第" << k << "個元素值為" << result;
}

int F(int n){
    int result;
    if(n==0 or n==1){
        result = 1;
    }
    else{
        result = F(n-1) + F(n-2);
    }
    cout << "費式數列第" << n << "個元素值為" << result << endl;
    return result;
}
