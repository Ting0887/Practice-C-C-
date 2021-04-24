#include<iostream>
using namespace std;
int main(){
    int a[9][9];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            a[i][j] = i*j;
            cout << (i+1)*(j+1) << "   ";
        }
        cout << endl;
    }
}
