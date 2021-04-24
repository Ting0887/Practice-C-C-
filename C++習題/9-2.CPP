#include<iostream>
using namespace std;
int main(){
    int A[5] = {60,90,44,98,50};
    int Max = 0;
    int index;
    for(int i=0;i<5;i++){
        cout << A[i] << endl;
        if (Max < A[i]){
            Max = A[i];
            index = i+1;
        }
    }
    cout << "陣列最大值為" << Max << "，在陣列第" << index << "個元素" << endl;

}
