#include<stdlib.h>
#include<stdio.h>

int main(){
	int a,b,c,total;
	double average;
	printf("�п�J�Ĥ@�Ӿ��? ");
	scanf("%d",&a);
	printf("�п�J�ĤG�Ӿ��? ");
	scanf("%d",&b);
	printf("�п�J�ĤT�Ӿ��? ");
	scanf("%d",&c);
	total = a + b + c;
	average = (a+b+c)/3.0;
	printf("%d+%d+%d=%d\n",a,b,c,total);
	printf("�����Ƭ�%.2f",average);
	system("PAUSE");
	return 0;
}
