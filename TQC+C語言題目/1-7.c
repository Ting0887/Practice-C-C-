#include<stdlib.h>
#include<stdio.h>

int main(){
	int a,b,c,d,e,f;
	printf("請輸入第一個整數: ");
	scanf("%d",&a);
	printf("請輸入第二個整數: ");
	scanf("%d",&b);
	printf("請輸入第三個整數: ");
	scanf("%d",&c);
	printf("請輸入第四個整數: ");
	scanf("%d",&d);
	printf("請輸入第五個整數: ");
	scanf("%d",&e);
	printf("請輸入第六個整數: ");
	scanf("%d",&f);
	printf("\n向右靠齊\n");
	printf("%10d %10d %10d\n",a,b,c);
	printf("%10d %10d %10d",d,e,f);
	printf("\n向左靠齊\n");
	printf("%-10d %-10d %-10d\n",a,b,c);
	printf("%-10d %-10d %-10d",d,e,f);
	system("PAUSE");
	return 0;
}
