#include<iostream>
using namespace std;

/*
1. �[�`

int sum(int);
int main(){
    int n,result;
    cout << "�п�JN��?";
    cin >> n;
    result = sum(n);
    cout << "1�[��" << n << "����" << result;
}

int sum(int n){
    int re;
    if(n==1){
        re = 1;
    }
    else{
        re = sum(n-1) + n;
    }
    cout << "1�[��" << n << "����" << re << endl;
    return re;

}*/

/*
2.�������ΪŶ���

int c(int);
int main(){
    int n,result;
    cout << "�п�JN��?";
    cin >> n;
    result = c(n);
    cout << n << "�����Ŷ��̦h����" << result << "�Ŷ�";
}

int c(int n){
    int re;
    if(n==1){
        re = 2;
    }
    else{
        re = c(n-1) + (n*n-n+2)/2;
    }
    cout << n << "�����Ŷ��̦h����" << re<< "�Ŷ�" << endl;
    return re;
}
*/

/*

3.���J�Ҩ��

int A(int,int);
int main(){
    int m,n,result;
    cout << "�п�JM��?";
    cin >> m;
    cout << "�п�JN��?";
    cin >> n;
    result = A(m,n);
    cout << "���J�Ҩ��" << m << "�P" << n << "�N�J���G��" << result;
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
    cout << "���J�Ҩ��" << m << "�P" << n << "�N�J���G��" << re << endl;
    return re;
}
*/
