#include<iostream>
#include<ctime>
#include<cstdlib>
#include<algorithm>

using namespace std;
/*
int main(){
	int score[10];
	int s;
	srand(time(NULL));
	for(int i=0;i<10;i++){
		int target = rand()%100+1;
		cout << "第" << i+1 << "位同學的成績為" <<  target << endl;
		score[i] = target;
	}	
	cout << "最高分為" << *max_element(score,score+10) << endl;
}*/
int main(){
	int n;
	cout << "請輸入n值?" ;
	cin >> n ;
	int num=0;
	int space[n+1];
	for(int i=0;i<n+1;i++){
		if(n==1){
			space[i] = 2;
			cout << "最多空間個數為" <<  space[1] << endl;
		}
		else{
			 num += space[i-1] + (i*i - i + 2)/2;
		}
	}
	cout << "最多空間個數為" << space[n] << endl;
}
