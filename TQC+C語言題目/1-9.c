#include<stdlib.h>
#include<stdio.h>

int main(){
	int score;
	printf("請輸入您的分數: ");
	scanf("%d",&score);
	if(score>=60){ 
		printf("及格\n");
	}
	else{
		printf("不及格");
	}
	int x;
	printf("請輸入x值: ");
	scanf("%d",&x);
	if(x%2==0){
		printf("%d是偶數\n",x);
	} 
 	else{
 		printf("%d是奇數",x);
	 }
    system("PAUSE");
    return 0;
} 
