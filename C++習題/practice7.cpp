#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
/*
int main(){
	int score[6] = {66,70,88,94,50,45};
	int sum = 0;
	for(int i=0;i<6;i++){
		sum += score[i];
		cout << "第" << i+1 << "位同學成績為" << score[i] << endl;
	}
	cout << "總分為" << sum << endl; 
}*/

/*
int main(){
	int F[16];
	F[0] = 1;
	F[1] = 1;
	for(int i=2;i<=15;i++){
		F[i] = F[i-1] + F[i-2];
		cout << "第"<< i+1 << "個費式數列數值為" << F[i] << endl;
	}
}*/

/*
int main(){
	int score[1000];
	int num[11];
	int j;
	srand(time(NULL));
	for(int i=0;i<11;i++){
	    num[i] = 0;
	}
	for(int i=0;i<1000;i++){
		score[i] = rand()%101;
		j = score[i]/10;
		num[j] += 1; 
	}
	for(int i=0;i<11;i++){
		cout << "num[" << i << "]=" << num[i] << endl;
	}
}*/

int main(){
	int prize[6];
	int repeat[48];
	int pz,count=1;
	srand(time(NULL));
	for(int i=0;i<48;i++){
		repeat[i] = 0;
	}
	do{
		pz = rand()%48+1;
		if(repeat[pz] == 0){
			repeat[pz] = 1;
			prize[count-1]=pz;
			count ++ ;
		}
		else{
			continue;
		}
	}while(count <= 6);
	for(int i=0;i<6;i++){
		cout << "第" << i+1 << "個得獎號碼是" << prize[i] << endl;	
		}
}
