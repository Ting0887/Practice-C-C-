#include<iostream>
using namespace std;

/*
1. 加總

int sum(int);
int main(){
    int n,result;
    cout << "請輸入N值?";
    cin >> n;
    result = sum(n);
    cout << "1加到" << n << "等於" << result;
}

int sum(int n){
    int re;
    if(n==1){
        re = 1;
    }
    else{
        re = sum(n-1) + n;
    }
    cout << "1加到" << n << "等於" << re << endl;
    return re;

}*/

/*
2.平面切割空間數

int c(int);
int main(){
    int n,result;
    cout << "請輸入N值?";
    cin >> n;
    result = c(n);
    cout << n << "平面空間最多產生" << result << "空間";
}

int c(int n){
    int re;
    if(n==1){
        re = 2;
    }
    else{
        re = c(n-1) + (n*n-n+2)/2;
    }
    cout << n << "平面空間最多產生" << re<< "空間" << endl;
    return re;
}
*/

/*

3.阿克曼函數

int A(int,int);
int main(){
    int m,n,result;
    cout << "請輸入M值?";
    cin >> m;
    cout << "請輸入N值?";
    cin >> n;
    result = A(m,n);
    cout << "阿克曼函數" << m << "與" << n << "代入結果為" << result;
}

int A(int m,int n){
    int re;
    if(m==0){
        re = n+1;
    }
    else if(m>0 && n==0){
        re = A(m-1,1);
    }
    else{
        re = A(m-1,A(m,n-1));
    }
    cout << "阿克曼函數" << m << "與" << n << "代入結果為" << re << endl;
    return re;
}
*/
