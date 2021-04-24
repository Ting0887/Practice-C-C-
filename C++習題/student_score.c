#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
    srand(time(NULL));
    int score[10];
    for(int i=0;i<10;i++){
        int score[i] = rand()%101;
        cout << "第" << i+1 << "位同學的成績為" << score[i];
        m_s = max(score[i]);
    }
    cout << "最高分為" << m_s ;
}
