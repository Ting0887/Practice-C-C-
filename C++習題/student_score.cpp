#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
    int M = 0;
    srand(time(NULL));
    int score[10];
    for(int i=0;i<10;i++){
        score[i] = rand()%101;
        cout << "��" << i+1 << "��P�Ǫ����Z��" << score[i] << endl;
        if (score[i] > M){
            M = score[i];
        }
        else{
            continue;
        }
    }
    cout << "�̰�����" << M << endl;
}
