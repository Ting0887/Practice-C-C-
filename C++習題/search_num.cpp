#include<iostream>
using namespace std;
int main(){
    int found;
    int score[5] = {60,99,44,98,50};
    for(int i=0;i<5;i++){
        cout << "score[" << i << "]=" << score[i] << endl;
        if (score[i] == 59){
            found = 1;
            break;
        }
    }
    if(found == 1){
        cout << "找到59分" << endl;
    }
    else{
        cout << "找不到59分" << endl;
    }
}
