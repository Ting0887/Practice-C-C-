#include<iostream>
using namespace std;
int main(){
    int A[3][3] = {{1,4,9},{3,3,4},{8,3,6}};
    cout << "�ഫ�e" << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout <<  A[i][j] << " ";
        }
        cout << endl;
    }
    cout << "�ഫ��"  << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout <<  A[j][i] << " ";
        }
        cout << endl;
    }

}
