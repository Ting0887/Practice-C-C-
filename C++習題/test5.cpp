#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
/*
19*19
int main(){
	for(int i=1;i<=19;i++){
		for(int j=1;j<=19;j++){
			cout << i << "*" << j << "=" << i*j << " ";
		}
		cout <<  endl;
	}
} */
/*
print star
int main(){
	int i = 1;
	while(i<=5){
	for(int j=1;j<=5-i;j++){
	   cout << " ";
	}
	for(int j=1;j<=i;j++){
		cout << "*";
	}
	i += 1;
	cout << endl;
	}
}*/
/*���x�} 
int main(){
	for(int i=1;i<=4;i++){
		for(int j=1;j<=4;j++){
			if(i==j){
			cout << "1";
			}
			else{
				cout << "0";
			}
		}
		cout << endl;
	}
}*/

int main(){
	while(true){
		srand(time(NULL));
		int target = rand()%6+1;
		if(target==6){
			cout << "�Y��l�I�Ƭ�6" << endl;
			break;
		}
		else{
			cout << "�Y��l�I�Ƭ�" << target << endl; 
		}
	}
} 
