#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){
    int score[5][40];
    srand(time(NULL));
    for(int i=0;i<5;i++){
        for(int j=0;j<40;j++){
            score[i][j] = rand()%101;
        }
    }
    for(int i=0;i<5;i++){
        int total = 0;
        for(int j=0;j<40;j++){
            total += score[i][j];
            cout << "��" << i+1 << "���" << j+1 << "��P�Ǫ����Z��" << score[i][j] << endl;
        }
        cout  << "��" << i+1 << "�`����" << total << endl;
    }
}
