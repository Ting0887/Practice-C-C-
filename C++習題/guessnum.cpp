#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
	int guess,target;
	srand(time(NULL));
	target = rand()%100+1;
	do{
		cout << "請猜一個數字:";
		cin >> guess;
		if(guess>target){
			cout << "猜小一點" << endl;
		}
		else if(guess<target){
			cout << "猜大一點" << endl;
		}
		else{
			cout << "猜對了" << endl;
		}
	}while(guess!=target);
}
