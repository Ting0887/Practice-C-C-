#include<stdlib.h>
#include<stdio.h>

int main(){
	int score;
	printf("�п�J�z������: ");
	scanf("%d",&score);
	if(score>=60){ 
		printf("�ή�\n");
	}
	else{
		printf("���ή�");
	}
	int x;
	printf("�п�Jx��: ");
	scanf("%d",&x);
	if(x%2==0){
		printf("%d�O����\n",x);
	} 
 	else{
 		printf("%d�O�_��",x);
	 }
    system("PAUSE");
    return 0;
} 
