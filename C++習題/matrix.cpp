#include<iostream>

using namespace std;
int main(){
    int A[2][3] = {{1,2,3},{2,2,2}};
    int B[2][3] = {{1,2,3},{3,3,3}};
    int C[2][3];

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << "," ;
        }
        cout << endl;
    }

}
