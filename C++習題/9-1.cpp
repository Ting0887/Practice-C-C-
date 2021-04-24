#include<iostream>
using namespace std;
int main(){
    int A[5] = {60,90,44,98,50};
    for(int i=0;i<5;i++){
            cout << "A[" << i << "]=" << A[i] << endl;
        if(A[0] > A[i]){
            A[0] = A[i];
        }
    }
    cout << "°}¦C³Ì¤p­È¬°" << A[0] << endl;
}
