#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
    srand(time(NULL));
    int score[10];
    for(int i=0;i<10;i++){
        int score[i] = rand()%101;
        cout << "��" << i+1 << "��P�Ǫ����Z��" << score[i];
        m_s = max(score[i]);
    }
    cout << "�̰�����" << m_s ;
}
