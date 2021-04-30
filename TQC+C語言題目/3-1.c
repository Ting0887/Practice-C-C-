#include<stdio.h>
#include<stdlib.h>

void Star();
int main(){
	printf("呼叫印出星星的函數!!!\n");
	Star();
	printf("\n我喜歡學C程式語言\n");
	Star();
	printf("\n結束函數的呼叫!!!\n");
	system("PAUSE");
	return 0;
}

void Star(){
	int i;
	for(i=1;i<=30;i++){
		printf("*");
	}
	
}
