#include<iostream>
#include<math.h>
using namespace std;
int Compute_square(int,int);

int main(){
    int m,n,result;
    cout << "請輸入M值?";
    cin >> m;
    cout << "請輸入N值?";
    cin >> n;
    result = Compute_square(m,n);
    cout << result << endl;
}

int Compute_square(int a,int b){
    int total;
    if(b==1){
        total = 1;
    }
    else{
        total = a*Compute_square(a,b-1);
    }
    cout << a << "的" << b << "次方等於" << total << endl;
    return total;
}
