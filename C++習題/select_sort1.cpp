#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
    int A[10];
    int tmp;
    srand(time(NULL));
    cout << "排序前" << endl;
    for(int i=0;i<10;i++){
        A[i] = rand()%101;
        cout << "A[" << i << "]=" << A[i] << endl;
    }

    for(int i=9;i>0;i--){
        int max_index = 0;
        for(int j=0;j<=i;j++){
            if(A[max_index] < A[j]){
                max_index = j;
            }
        }
        tmp = A[max_index];
        A[max_index] = A[i];
        A[i] = tmp;
    }
    cout << "排序後" << endl;
    for(int i=0;i<10;i++){
        cout << "A[" << i << "]=" << A[i] << endl;
    }
}
