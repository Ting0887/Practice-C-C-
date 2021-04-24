#include<iostream>
using namespace std;
int Is_prime(int);

int main(){
    for(int i=2;i<=100;i++){
        int result;
        result = Is_prime(i);
        if(result==1){
            cout << i << "¬°½è¼Æ"<< endl;
        }
    }
}
int Is_prime(int i){
    int flag,x=2;
    while((flag=1)&&(x<i)){
        if(i%x==0){
            flag = 0;
            break;
        }
        else{
            x += 1;
        }
    }
    return flag;
}
