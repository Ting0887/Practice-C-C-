#include<iostream>
#include<math.h>
using namespace std;
int Compute_square(int,int);

int main(){
    int m,n,result;
    cout << "�п�JM��?";
    cin >> m;
    cout << "�п�JN��?";
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
    cout << a << "��" << b << "���赥��" << total << endl;
    return total;
}
