#include<stdio.h>
#include<stdlib.h>
int main(){
	int num;
	double price=23.34;//總金額必須用double類型儲存
	double total;
	printf("請問您要買幾瓶蘋果汁? ");
	scanf("%d",&num);
	total = num*price;
	printf("我買了%d瓶100%%的蘋果汁\n",num); //要輸出"%"必須輸入"%%"才可以顯現出來
	printf("花了%f元",total);
	system("PAUSE");
	return 0;
} 
