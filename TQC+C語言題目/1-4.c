#include<stdio.h>
#include<stdlib.h>
int main(){
	int num;
	double price=23.34;//�`���B������double�����x�s
	double total;
	printf("�аݱz�n�R�X�~ī�G��? ");
	scanf("%d",&num);
	total = num*price;
	printf("�ڶR�F%d�~100%%��ī�G��\n",num); //�n��X"%"������J"%%"�~�i�H��{�X��
	printf("��F%f��",total);
	system("PAUSE");
	return 0;
} 
