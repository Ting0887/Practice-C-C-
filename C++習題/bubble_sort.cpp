#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
    int tmp;
    int A[10];
    srand(time(NULL));
    cout << "排序前" << endl;
    for(int i=0;i<10;i++){
        A[i] = rand()%101;
        cout <<  "A[" << i << "]=" << A[i] << endl;
    }
    cout << "排序後" << endl;
    for(int i=9;i>=0;i--){
        for(int j=0;j<i;j++){
            if(A[j] > A[j+1]){
                tmp = A[j];
                A[j] = A[j+1];
                A[j+1] = tmp;
            }
        }
    }
    for (int i=0;i<10;i++){
        cout << "A[" << i << "]=" << A[i] << endl;
    }
}
