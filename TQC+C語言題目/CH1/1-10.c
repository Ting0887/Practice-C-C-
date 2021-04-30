#include<stdio.h>
#include<stdlib.h>

int main(){
	int a,b,c;
	printf("請輸入變數a的值: ");
	scanf("%d",&a);
	printf("請輸入變數b的值: ");
	scanf("%d",&b);
	printf("請輸入變數c的值: ");
	scanf("%d",&c);
	/*
	if(a>=60&&a<100){
        printf("1\n");
	} 
	else{
		printf("0\n");
	}
	
	printf("%f\n",(b+1)/10.0);
	
	if(a>c){
		printf("%d\n",a);
	}
	else{
		printf("%d\n",c);
	}
	*/
	 //判斷a是否大於等於60且小於100，若是，則輸出1, 否則，輸出0
	 printf("%d\n", 60<=a && a<100);//"且"的符號為"&&"，C語言中，true是1，false是0
	 //先將b加1後，再除以10.
	 printf("%f\n", (b+1)/10.);
	 //判斷a是否大於c，若是，則印出a，否則，印出
	 printf("%d\n", a>c?a:c);//判斷式?是:否。判斷式如果成立，則顯示"是"，否則顯示"否"
	 system("PAUSE");
	 return 0;
}
