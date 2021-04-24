#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int total = 0;
    int n;
    cout << "請輸入n值?";
    cin >> n;
    int c[n+1];
    for(int i=0;i<n+1;i++){
        if(i==0){
            c[i+1] = 2;
        }
        else{
            c[i+1] = c[i] + ((i+1)*(i+1) - (i+1) +2)/2;
        }
        //cout << c[i] << endl;
    }
    cout << "最多空間個數為" << c[n] << endl;
}
