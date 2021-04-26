#include<stdlib.h> 
#include<stdio.h>

int main(){
	int a,b,c,d;
	printf("請輸入第一個變數? ");
	scanf("%d",&a);
	printf("請輸入第二個變數? ");
	scanf("%d",&b);
	printf("請輸入第三個變數? ");;
	scanf("%d",&c);
	printf("請輸入第四個變數? ");
	scanf("%d",&d);
	printf("此式的餘式為:%d",((a+b)/2-(c+d)/2)%2);
	system("PAUSE");
	return 0;
}
